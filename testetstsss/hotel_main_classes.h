#pragma once

#include <iostream>
#include <string>
using namespace std;

class Ñleaning
{
	struct date_type
	{
		int day;
		int mounth;
		int year;
		date_type() : day{}, mounth{}, year{} {}
		date_type(int day_, int mounth_, int year_) : day{ day_ }, mounth{ mounth_ }, year{ year_ } {}
		int get_int_time() { day + 30 * mounth + 365 * year; }
		bool operator ==(const date_type& other)
		{
			return day == other.day && mounth == other.mounth && year == other.year;
		}
		bool operator !=(const date_type& other)
		{
			return day != other.day || mounth != other.mounth || year != other.year;
		}
		bool operator >=(const date_type& other)
		{
			return day + 30 * mounth + 365 * year >= other.day + 30 * other.mounth + 365 * other.year;
		}
		bool operator <=(const date_type& other)
		{
			return day + 30 * mounth + 365 * year <= other.day + 30 * other.mounth + 365 * other.year;
		}
		bool operator >(const date_type& other)
		{
			return day + 30 * mounth + 365 * year > other.day + 30 * other.mounth + 365 * other.year;
		}
		bool operator <(const date_type& other)
		{
			return day + 30 * mounth + 365 * year < other.day + 30 * other.mounth + 365 * other.year;
		}
		friend ostream& operator << (ostream& out, date_type& object)
		{
			out << object.day << ":" << object.mounth << ":" << object.year;
			return out;
		}
	};
	string employee;
	int building;
	int room_number; // key
	date_type date;
public:
	Ñleaning(string employee_, int building_, int room_number_, date_type date_) : 
		employee{ employee_ }, building{ building_ }, room_number{ room_number_ }, date{ date_ } {}
	Ñleaning(date_type date_) : employee{}, building{}, room_number{}, date{date_} {}
	Ñleaning() : employee{}, building{}, room_number{}, date{} {}
	date_type get_date() { return date; }
	auto get_all_data_string()
	{
		auto str_e = gcnew System::String(employee.c_str());
		auto result = "Emp.: " + str_e + " Build.: " + building.ToString() + " Room: "
			+ room_number.ToString() + " Date: " + date.day.ToString() + "/" 
			+ date.mounth.ToString() + "/" + date.year.ToString();

		return result;
	}
	bool operator ==(const Ñleaning& other)
	{
		return date == other.date;
	}
	bool operator !=(const Ñleaning& other)
	{
		return date != other.date;
	}
	bool operator >=(const Ñleaning& other)
	{
		return date >= other.date;
	}
	bool operator <=(const Ñleaning& other)
	{
		return date <= other.date;
	}
	bool operator >(const Ñleaning& other)
	{
		return date > other.date;
	}
	bool operator < (const Ñleaning& other)
	{
		return date < other.date;
	}
	friend ostream& operator << (ostream& out, Ñleaning& object)
	{
		out << "Employee: " << object.employee << " Building " << object.building << 
			" Room number " << object.room_number << " | Date: " << object.date;
		return out;
	}
	int get_room_num() { return room_number; }
};


enum class room_type
{
	standard = 0, superior, studio, delux
};

std::ostream& operator << (std::ostream& out, const room_type& t)
{
	switch (t) {
	case room_type::standard: return (out << "Standard");
	case room_type::superior: return (out << "Superior");
	case room_type::studio: return (out << "Studio");
	case room_type::delux: return (out << "Delux");
	}
	return (out);
}


class Room 
{
	int room_number;
	int building;
	room_type type;
public:
	Room(int building_, int room_number_, int type_) :
		room_number{ room_number_ }, building{ building_ }, type{ (room_type)type_ } {}
	Room() : room_number{ }, building{  }, type{  } {}
	operator int() const
	{
		return room_number;
	}
	int get_type() { return (int)type; }
	int get_room_num() { return room_number; }
	friend ostream& operator << (ostream& out, Room& object)
	{
		out << "Room number: " << object.room_number << " Building: " << object.building << " Type: " << object.type;
		return out;
	}
	bool operator ==(const Room& other)
	{
		return room_number == other.room_number && building == other.building && type == other.type;
	}
	bool operator !=(const Room& other)
	{
		return room_number != other.room_number || building != other.building || type != other.type;
	}
};



