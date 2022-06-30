#pragma once
#include "main_interface.h"
#include "hash_table_class.h"
#include "tree_class.h"
#include "init_mod.h"
#include "hotel_main_classes.h"



class HotelFacade // Паттерн фасад для усправления основными сущностями
{
	AVL_tree<Сleaning*>* cleaning_data_base;
	SimpleHashTable<Room*>* room_data_base;
	
public:
	HotelFacade() : cleaning_data_base{ nullptr }, room_data_base{ nullptr }{}
	~HotelFacade()
	{
		delete cleaning_data_base;
		delete room_data_base;
	}

	void Init_Data_Bases() // инициализация основных баз данных
	{
		Init_Сleaning_Data_Base cleaning_base;
		Init_Room_Data_Base room_base;
		cleaning_data_base = cleaning_base.Init_Data_Base();
		room_data_base = room_base.Init_Data_Base();
	}

	vector<string> Init_Cleaning_for_Form()
	{
		ifstream file_for_input("Сleaning.txt");
		string tmp;
		vector<string> splitted_line;
		vector<string> result;


		while (getline(file_for_input, tmp))
		{
			result.push_back(tmp);
		}
		file_for_input.close();
		return result;
	}

	vector<string> Init_Rooms_for_Form()
	{
		ifstream file_for_input("Room.txt");
		string tmp;
		vector<string> splitted_line;
		vector<string> result;


		while (getline(file_for_input, tmp))
		{
			result.push_back(tmp);
		}
		file_for_input.close();
		return result;
	}

	void show_all_rooms()
	{
		/*for (auto room : *room_data_base)
			if (room.cell_status == status::occupied)
				cout << *room.data << endl;
		cout << endl;*/
		room_data_base->table_print();
	}

	void show_all_cleaning()
	{
		cleaning_data_base->preOrderWrap();
	}



	auto print_intermediate_result(int type, int fir_day, int sec_day, int fir_mon, int sec_mon, int fir_yer, int sec_yer)
	{
		Сleaning* low{ new Сleaning{{fir_day, fir_mon, fir_yer}} };
		Сleaning* high{ new Сleaning{{sec_day, sec_mon, sec_yer}} };

		auto sub_result = cleaning_data_base->find_in_ranges_pre_order(low, high);

		vector<Сleaning*> result;

		for (auto item : *sub_result)
		{
			auto tmp_2 = room_data_base->search_index(item.data->get_room_num());
			if (!tmp_2)
				continue;
			auto tmp = tmp_2->get_type();
			if (tmp == type)
				result.push_back(item.data);
		}

		return result;
	}
};