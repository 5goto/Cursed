#pragma once
#include <iostream>
#include <string>
#include "main_interface.h"
using namespace std;

HotelFacade test;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridView^ CleaningWindow;
	private: System::Windows::Forms::NumericUpDown^ InputDayFirst;
	private: System::Windows::Forms::NumericUpDown^ InputMounthFirst;
	private: System::Windows::Forms::NumericUpDown^ InputYearFirst;




	private: System::Windows::Forms::GroupBox^ Ñleanings;
	private: System::Windows::Forms::GroupBox^ Room_box;
	private: System::Windows::Forms::DataGridView^ RoomsWindow;
	private: System::Windows::Forms::ComboBox^ comboType;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBoxResult;
	private: System::Windows::Forms::DataGridView^ ResultWindow;




	private: System::Windows::Forms::Button^ GenerateResult;
	private: System::Windows::Forms::NumericUpDown^ InputYearSecond;

	private: System::Windows::Forms::NumericUpDown^ InputMounthSecond;

	private: System::Windows::Forms::NumericUpDown^ InputDaySecond;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ InitData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cleanings;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rooms;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Results;














	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


	protected:

	protected:

	private:



		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->CleaningWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Cleanings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InputDayFirst = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputMounthFirst = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputYearFirst = (gcnew System::Windows::Forms::NumericUpDown());
			this->Ñleanings = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->InputYearSecond = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputMounthSecond = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputDaySecond = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Room_box = (gcnew System::Windows::Forms::GroupBox());
			this->InitData = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboType = (gcnew System::Windows::Forms::ComboBox());
			this->RoomsWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBoxResult = (gcnew System::Windows::Forms::GroupBox());
			this->GenerateResult = (gcnew System::Windows::Forms::Button());
			this->ResultWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Results = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDayFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearFirst))->BeginInit();
			this->Ñleanings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearSecond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthSecond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDaySecond))->BeginInit();
			this->Room_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsWindow))->BeginInit();
			this->groupBoxResult->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// CleaningWindow
			// 
			this->CleaningWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CleaningWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Cleanings });
			this->CleaningWindow->Location = System::Drawing::Point(39, 35);
			this->CleaningWindow->Name = L"CleaningWindow";
			this->CleaningWindow->Size = System::Drawing::Size(372, 522);
			this->CleaningWindow->TabIndex = 2;
			// 
			// Cleanings
			// 
			this->Cleanings->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Cleanings->HeaderText = L"Cleanings";
			this->Cleanings->Name = L"Cleanings";
			// 
			// InputDayFirst
			// 
			this->InputDayFirst->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputDayFirst->Location = System::Drawing::Point(140, 587);
			this->InputDayFirst->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->InputDayFirst->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputDayFirst->Name = L"InputDayFirst";
			this->InputDayFirst->Size = System::Drawing::Size(88, 33);
			this->InputDayFirst->TabIndex = 3;
			this->InputDayFirst->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputDayFirst->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// InputMounthFirst
			// 
			this->InputMounthFirst->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputMounthFirst->Location = System::Drawing::Point(234, 587);
			this->InputMounthFirst->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->InputMounthFirst->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputMounthFirst->Name = L"InputMounthFirst";
			this->InputMounthFirst->Size = System::Drawing::Size(88, 33);
			this->InputMounthFirst->TabIndex = 4;
			this->InputMounthFirst->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputMounthFirst->ValueChanged += gcnew System::EventHandler(this, &Form1::InputMounth_ValueChanged);
			// 
			// InputYearFirst
			// 
			this->InputYearFirst->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputYearFirst->Location = System::Drawing::Point(328, 587);
			this->InputYearFirst->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->InputYearFirst->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			this->InputYearFirst->Name = L"InputYearFirst";
			this->InputYearFirst->Size = System::Drawing::Size(83, 33);
			this->InputYearFirst->TabIndex = 5;
			this->InputYearFirst->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// Ñleanings
			// 
			this->Ñleanings->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Ñleanings->Controls->Add(this->label6);
			this->Ñleanings->Controls->Add(this->label5);
			this->Ñleanings->Controls->Add(this->InputYearSecond);
			this->Ñleanings->Controls->Add(this->InputMounthSecond);
			this->Ñleanings->Controls->Add(this->InputDaySecond);
			this->Ñleanings->Controls->Add(this->label4);
			this->Ñleanings->Controls->Add(this->label3);
			this->Ñleanings->Controls->Add(this->label2);
			this->Ñleanings->Controls->Add(this->CleaningWindow);
			this->Ñleanings->Controls->Add(this->InputDayFirst);
			this->Ñleanings->Controls->Add(this->InputMounthFirst);
			this->Ñleanings->Controls->Add(this->InputYearFirst);
			this->Ñleanings->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ñleanings->Location = System::Drawing::Point(526, 12);
			this->Ñleanings->Name = L"Ñleanings";
			this->Ñleanings->Size = System::Drawing::Size(450, 697);
			this->Ñleanings->TabIndex = 6;
			this->Ñleanings->TabStop = false;
			this->Ñleanings->Text = L"List of Ñleanings";
			// 
			// label6
			// 
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label6->Location = System::Drawing::Point(39, 646);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 32);
			this->label6->TabIndex = 13;
			this->label6->Text = L"End";
			// 
			// label5
			// 
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label5->Location = System::Drawing::Point(34, 588);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 32);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Beginning";
			// 
			// InputYearSecond
			// 
			this->InputYearSecond->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputYearSecond->Location = System::Drawing::Point(328, 646);
			this->InputYearSecond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2022, 0, 0, 0 });
			this->InputYearSecond->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			this->InputYearSecond->Name = L"InputYearSecond";
			this->InputYearSecond->Size = System::Drawing::Size(83, 33);
			this->InputYearSecond->TabIndex = 11;
			this->InputYearSecond->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// InputMounthSecond
			// 
			this->InputMounthSecond->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputMounthSecond->Location = System::Drawing::Point(234, 646);
			this->InputMounthSecond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->InputMounthSecond->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputMounthSecond->Name = L"InputMounthSecond";
			this->InputMounthSecond->Size = System::Drawing::Size(88, 33);
			this->InputMounthSecond->TabIndex = 10;
			this->InputMounthSecond->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InputDaySecond
			// 
			this->InputDaySecond->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->InputDaySecond->Location = System::Drawing::Point(140, 646);
			this->InputDaySecond->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->InputDaySecond->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputDaySecond->Name = L"InputDaySecond";
			this->InputDaySecond->Size = System::Drawing::Size(88, 33);
			this->InputDaySecond->TabIndex = 9;
			this->InputDaySecond->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label4->Location = System::Drawing::Point(342, 560);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Year";
			// 
			// label3
			// 
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label3->Location = System::Drawing::Point(234, 560);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Mounth";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label2->Location = System::Drawing::Point(166, 560);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Day";
			// 
			// Room_box
			// 
			this->Room_box->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Room_box->Controls->Add(this->InitData);
			this->Room_box->Controls->Add(this->label1);
			this->Room_box->Controls->Add(this->comboType);
			this->Room_box->Controls->Add(this->RoomsWindow);
			this->Room_box->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Room_box->Location = System::Drawing::Point(35, 12);
			this->Room_box->Name = L"Room_box";
			this->Room_box->Size = System::Drawing::Size(450, 697);
			this->Room_box->TabIndex = 7;
			this->Room_box->TabStop = false;
			this->Room_box->Text = L"List of Rooms";
			// 
			// InitData
			// 
			this->InitData->Location = System::Drawing::Point(39, 584);
			this->InitData->Name = L"InitData";
			this->InitData->Size = System::Drawing::Size(150, 94);
			this->InitData->TabIndex = 5;
			this->InitData->Text = L"Init Data";
			this->InitData->UseVisualStyleBackColor = true;
			this->InitData->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(306, 557);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Room type";
			// 
			// comboType
			// 
			this->comboType->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->comboType->FormattingEnabled = true;
			this->comboType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0", L"1", L"2", L"3" });
			this->comboType->Location = System::Drawing::Point(290, 584);
			this->comboType->Name = L"comboType";
			this->comboType->Size = System::Drawing::Size(121, 35);
			this->comboType->TabIndex = 3;
			// 
			// RoomsWindow
			// 
			this->RoomsWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->RoomsWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RoomsWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Rooms });
			this->RoomsWindow->Location = System::Drawing::Point(39, 35);
			this->RoomsWindow->Name = L"RoomsWindow";
			this->RoomsWindow->Size = System::Drawing::Size(372, 519);
			this->RoomsWindow->TabIndex = 2;
			this->RoomsWindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::RoomsWindow_CellContentClick);
			// 
			// Rooms
			// 
			this->Rooms->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Rooms->HeaderText = L"Rooms";
			this->Rooms->Name = L"Rooms";
			// 
			// groupBoxResult
			// 
			this->groupBoxResult->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBoxResult->Controls->Add(this->GenerateResult);
			this->groupBoxResult->Controls->Add(this->ResultWindow);
			this->groupBoxResult->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxResult->Location = System::Drawing::Point(1016, 12);
			this->groupBoxResult->Name = L"groupBoxResult";
			this->groupBoxResult->Size = System::Drawing::Size(450, 697);
			this->groupBoxResult->TabIndex = 8;
			this->groupBoxResult->TabStop = false;
			this->groupBoxResult->Text = L"Result";
			// 
			// GenerateResult
			// 
			this->GenerateResult->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenerateResult->Location = System::Drawing::Point(136, 586);
			this->GenerateResult->Name = L"GenerateResult";
			this->GenerateResult->Size = System::Drawing::Size(185, 33);
			this->GenerateResult->TabIndex = 3;
			this->GenerateResult->Text = L"Find";
			this->GenerateResult->UseVisualStyleBackColor = true;
			this->GenerateResult->Click += gcnew System::EventHandler(this, &Form1::GenerateResult_Click);
			// 
			// ResultWindow
			// 
			this->ResultWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->ResultWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Results });
			this->ResultWindow->Location = System::Drawing::Point(39, 35);
			this->ResultWindow->Name = L"ResultWindow";
			this->ResultWindow->Size = System::Drawing::Size(372, 522);
			this->ResultWindow->TabIndex = 2;
			this->ResultWindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Results
			// 
			this->Results->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Results->HeaderText = L"Results";
			this->Results->Name = L"Results";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1509, 721);
			this->Controls->Add(this->groupBoxResult);
			this->Controls->Add(this->Room_box);
			this->Controls->Add(this->Ñleanings);
			this->Name = L"Form1";
			this->Text = L"Kursed";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDayFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearFirst))->EndInit();
			this->Ñleanings->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearSecond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthSecond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDaySecond))->EndInit();
			this->Room_box->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsWindow))->EndInit();
			this->groupBoxResult->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
			
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void InputMounth_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GenerateResult_Click(System::Object^ sender, System::EventArgs^ e) {  // Result button
	test.Init_Data_Bases(); // èíèöèàëèçàöèÿ áàçû äàííûõ

	auto room_type = Convert::ToInt32(comboType->SelectedItem);

	auto fir_day = Convert::ToInt32(InputDayFirst->Value);
	auto sec_day = Convert::ToInt32(InputDaySecond->Value);

	auto fir_mon = Convert::ToInt32(InputMounthFirst->Value);
	auto sec_mon = Convert::ToInt32(InputMounthSecond->Value);

	auto fir_yer = Convert::ToInt32(InputYearFirst->Value);
	auto sec_yer = Convert::ToInt32(InputYearSecond->Value);

	auto res = test.print_intermediate_result(room_type, fir_day, sec_day,
										fir_mon, sec_mon, fir_yer, sec_yer);

	if (res.size() != 0)
	{
		ResultWindow->ColumnCount = 1;
		ResultWindow->RowCount = res.size();

		for (auto i = 0; i < res.size(); ++i)
		{
			ResultWindow->Rows[i]->Cells[0]->Value = res[i]->get_all_data_string();
		}
	}
	else
		MessageBox::Show("Ðåçóëüòàò ñ òàêèìè èñõîäíûìè äàííûìè îòñóòñòâóåò", "Ïîèñê");
}
private: System::Void RoomsWindow_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		std::vector<std::string> tmp = test.Init_Cleaning_for_Form();
		CleaningWindow->RowCount = tmp.size();
		CleaningWindow->ColumnCount = 1;

		for (auto i = 0; i < tmp.size(); ++i)
		{
			String^ str = gcnew String(tmp[i].c_str());
			CleaningWindow->Rows[i]->Cells[0]->Value = str;
		}

		tmp = test.Init_Rooms_for_Form();
		RoomsWindow->RowCount = tmp.size();
		RoomsWindow->ColumnCount = 1;

		for (auto i = 0; i < tmp.size(); ++i)
		{
			String^ str = gcnew String(tmp[i].c_str());
			RoomsWindow->Rows[i]->Cells[0]->Value = str;
		}

		return System::Void();
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
