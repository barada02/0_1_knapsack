#pragma once
#include "Animation.h"
namespace knapsack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Base
	/// </summary>
	public ref class Base : public System::Windows::Forms::Form
	{
	public:
		Base(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Base()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ knapsackValue_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Capacity_textbox;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ Kanpsack_button;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ laptop_panel;
	private: System::Windows::Forms::Panel^ headphone_panel;


	private: System::Windows::Forms::Panel^ shoes_panel;



	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ watch_panel;

	private: System::Windows::Forms::Panel^ mouse_panel;
	private: System::Windows::Forms::Panel^ bottom_panel;



	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;

	private: System::Windows::Forms::Button^ animation_button;
	private: System::Windows::Forms::PictureBox^ newUser_pictureBox;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Base::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->animation_button = (gcnew System::Windows::Forms::Button());
			this->bottom_panel = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->headphone_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->shoes_panel = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->watch_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->mouse_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->laptop_panel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Kanpsack_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->knapsackValue_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Capacity_textbox = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->newUser_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->headphone_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->shoes_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->watch_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->mouse_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->laptop_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newUser_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->animation_button);
			this->panel1->Controls->Add(this->bottom_panel);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->headphone_panel);
			this->panel1->Controls->Add(this->shoes_panel);
			this->panel1->Controls->Add(this->watch_panel);
			this->panel1->Controls->Add(this->mouse_panel);
			this->panel1->Controls->Add(this->laptop_panel);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->Kanpsack_button);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->knapsackValue_label);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Capacity_textbox);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1786, 787);
			this->panel1->TabIndex = 0;
			// 
			// animation_button
			// 
			this->animation_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->animation_button->Location = System::Drawing::Point(990, 40);
			this->animation_button->Name = L"animation_button";
			this->animation_button->Size = System::Drawing::Size(110, 42);
			this->animation_button->TabIndex = 23;
			this->animation_button->Text = L"Max Value";
			this->animation_button->UseVisualStyleBackColor = true;
			// 
			// bottom_panel
			// 
			this->bottom_panel->BackColor = System::Drawing::Color::SeaGreen;
			this->bottom_panel->Location = System::Drawing::Point(1012, 608);
			this->bottom_panel->Name = L"bottom_panel";
			this->bottom_panel->Size = System::Drawing::Size(759, 27);
			this->bottom_panel->TabIndex = 3;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::SeaGreen;
			this->panel10->Location = System::Drawing::Point(1749, 312);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(25, 323);
			this->panel10->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::SeaGreen;
			this->panel9->Location = System::Drawing::Point(990, 312);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(25, 323);
			this->panel9->TabIndex = 2;
			// 
			// headphone_panel
			// 
			this->headphone_panel->BackColor = System::Drawing::Color::Snow;
			this->headphone_panel->Controls->Add(this->pictureBox7);
			this->headphone_panel->Controls->Add(this->label13);
			this->headphone_panel->Controls->Add(this->label14);
			this->headphone_panel->Location = System::Drawing::Point(1633, 101);
			this->headphone_panel->Name = L"headphone_panel";
			this->headphone_panel->Size = System::Drawing::Size(104, 141);
			this->headphone_panel->TabIndex = 18;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(14, 3);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(64, 64);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 18;
			this->pictureBox7->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(18, 70);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 31);
			this->label13->TabIndex = 19;
			this->label13->Text = L"W: 4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(18, 101);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 31);
			this->label14->TabIndex = 20;
			this->label14->Text = L"V: 70";
			// 
			// shoes_panel
			// 
			this->shoes_panel->BackColor = System::Drawing::Color::Snow;
			this->shoes_panel->Controls->Add(this->label17);
			this->shoes_panel->Controls->Add(this->label10);
			this->shoes_panel->Controls->Add(this->pictureBox6);
			this->shoes_panel->Location = System::Drawing::Point(1476, 101);
			this->shoes_panel->Name = L"shoes_panel";
			this->shoes_panel->Size = System::Drawing::Size(104, 141);
			this->shoes_panel->TabIndex = 17;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(8, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 31);
			this->label17->TabIndex = 13;
			this->label17->Text = L"W: 2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(8, 104);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 31);
			this->label10->TabIndex = 17;
			this->label10->Text = L"V: 40";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(16, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(64, 64);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			// 
			// watch_panel
			// 
			this->watch_panel->BackColor = System::Drawing::Color::Snow;
			this->watch_panel->Controls->Add(this->pictureBox4);
			this->watch_panel->Controls->Add(this->label6);
			this->watch_panel->Controls->Add(this->label9);
			this->watch_panel->Location = System::Drawing::Point(1331, 101);
			this->watch_panel->Name = L"watch_panel";
			this->watch_panel->Size = System::Drawing::Size(104, 141);
			this->watch_panel->TabIndex = 16;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(88, 64);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 31);
			this->label6->TabIndex = 13;
			this->label6->Text = L"W: 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(8, 101);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 31);
			this->label9->TabIndex = 16;
			this->label9->Text = L"V: 60";
			// 
			// mouse_panel
			// 
			this->mouse_panel->BackColor = System::Drawing::Color::Snow;
			this->mouse_panel->Controls->Add(this->pictureBox5);
			this->mouse_panel->Controls->Add(this->label5);
			this->mouse_panel->Controls->Add(this->label8);
			this->mouse_panel->Location = System::Drawing::Point(1189, 104);
			this->mouse_panel->Name = L"mouse_panel";
			this->mouse_panel->Size = System::Drawing::Size(104, 147);
			this->mouse_panel->TabIndex = 12;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(4, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 64);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 31);
			this->label5->TabIndex = 12;
			this->label5->Text = L"W: 3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 31);
			this->label8->TabIndex = 15;
			this->label8->Text = L"V: 150";
			// 
			// laptop_panel
			// 
			this->laptop_panel->BackColor = System::Drawing::Color::Snow;
			this->laptop_panel->Controls->Add(this->pictureBox3);
			this->laptop_panel->Controls->Add(this->label3);
			this->laptop_panel->Controls->Add(this->label4);
			this->laptop_panel->Location = System::Drawing::Point(1034, 101);
			this->laptop_panel->Name = L"laptop_panel";
			this->laptop_panel->Size = System::Drawing::Size(104, 147);
			this->laptop_panel->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(90, 64);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 31);
			this->label3->TabIndex = 10;
			this->label3->Text = L"W: 5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 31);
			this->label4->TabIndex = 11;
			this->label4->Text = L"V: 700";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1390, 51);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(214, 31);
			this->label16->TabIndex = 22;
			this->label16->Text = L"Total Value: 1020";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1373, 25);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(207, 31);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Total Weight: 16";
			// 
			// Kanpsack_button
			// 
			this->Kanpsack_button->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kanpsack_button->Location = System::Drawing::Point(529, 336);
			this->Kanpsack_button->Name = L"Kanpsack_button";
			this->Kanpsack_button->Size = System::Drawing::Size(110, 42);
			this->Kanpsack_button->TabIndex = 6;
			this->Kanpsack_button->Text = L"Max Value";
			this->Kanpsack_button->UseVisualStyleBackColor = true;
			this->Kanpsack_button->Click += gcnew System::EventHandler(this, &Base::Kanpsack_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(283, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(356, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Enter your Knapsack Capacity";
			// 
			// knapsackValue_label
			// 
			this->knapsackValue_label->AutoSize = true;
			this->knapsackValue_label->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->knapsackValue_label->Location = System::Drawing::Point(685, 217);
			this->knapsackValue_label->Name = L"knapsackValue_label";
			this->knapsackValue_label->Size = System::Drawing::Size(194, 31);
			this->knapsackValue_label->TabIndex = 4;
			this->knapsackValue_label->Text = L"Kanpsack Value";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(283, 217);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Maximum Value You Can Take:";
			// 
			// Capacity_textbox
			// 
			this->Capacity_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Capacity_textbox->Location = System::Drawing::Point(722, 128);
			this->Capacity_textbox->Name = L"Capacity_textbox";
			this->Capacity_textbox->Size = System::Drawing::Size(110, 30);
			this->Capacity_textbox->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SeaGreen;
			this->panel3->Location = System::Drawing::Point(900, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(43, 641);
			this->panel3->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->newUser_pictureBox);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(211, 787);
			this->panel2->TabIndex = 0;
			// 
			// newUser_pictureBox
			// 
			this->newUser_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newUser_pictureBox.Image")));
			this->newUser_pictureBox->Location = System::Drawing::Point(40, 627);
			this->newUser_pictureBox->Name = L"newUser_pictureBox";
			this->newUser_pictureBox->Size = System::Drawing::Size(100, 120);
			this->newUser_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->newUser_pictureBox->TabIndex = 24;
			this->newUser_pictureBox->TabStop = false;
			this->newUser_pictureBox->Click += gcnew System::EventHandler(this, &Base::newUser_pictureBox_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(65, 433);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::SeaShell;
			this->label12->Location = System::Drawing::Point(3, 247);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(217, 24);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Take it OR Leave it ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->label11->Location = System::Drawing::Point(12, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(162, 31);
			this->label11->TabIndex = 18;
			this->label11->Text = L"0/1 Knapsac ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(25, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(149, 122);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Base
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1786, 787);
			this->Controls->Add(this->panel1);
			this->Name = L"Base";
			this->Text = L"Base";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->headphone_panel->ResumeLayout(false);
			this->headphone_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->shoes_panel->ResumeLayout(false);
			this->shoes_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->watch_panel->ResumeLayout(false);
			this->watch_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->mouse_panel->ResumeLayout(false);
			this->mouse_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->laptop_panel->ResumeLayout(false);
			this->laptop_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newUser_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		// Method to perform the Knapsack calculation
		int knapsack(int W, array<int>^ wt, array<int>^ val, int n) {
			array<array<int>^>^ K = gcnew array<array<int>^>(n + 1);
			for (int i = 0; i <= n; i++) {
				K[i] = gcnew array<int>(W + 1);
			}

			for (int i = 0; i <= n; i++) {
				for (int w = 0; w <= W; w++) {
					if (i == 0 || w == 0)
						K[i][w] = 0;
					else if (wt[i - 1] <= w)
						K[i][w] = Math::Max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
					else
						K[i][w] = K[i - 1][w];
				}
			}

			return K[n][W];
		}




		array<int>^ FindValues(array<int>^ values, int target) {
			array<int>^ resultValues = gcnew array<int>(values->Length); // Initialize result array with the same size as values
			List<int>^ sortedValues = gcnew List<int>(values); // Convert values to a List for sorting
			sortedValues->Sort(); // Sort the list in ascending order
			sortedValues->Reverse();

			int index = 0;
			// Loop through each value in the sorted array
			for each (int val in sortedValues) {
				// Check if the current value is less than or equal to the remaining target
				if (val <= target) {
					// Subtract the current value from the target
					target -= val;
					// Store the current value in the result array
					resultValues[index++] = val;
				}
				if (target == 0) {
					break;
				}
			}

			return resultValues;
		}

		void ShowProductMessage(int val) {
			// Create the message string
			String^ message = "You chose a product of " + val + " rupees.";

			// Show the popup message
			MessageBox::Show(message, "Product Selection", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


		array<int>^ resultValues;
		Panel^ productPanel;

		Panel^ GetProductPanel(int value) {
			Panel^ productpanel;

			switch (value) {
			case 700:
				productpanel = laptop_panel;
				break;
			case 150:
				productpanel = mouse_panel;
				break;
			case 60:
				productpanel = watch_panel;
				break;
			case 40:
				productpanel = shoes_panel;
				break;
			case 70:
				productpanel = headphone_panel;
				break;
			default:
				// Handle default case
				productpanel = nullptr; // or any other default value
				break;
			}

			return productpanel;
		}

		void ShowProductPanels(array<int>^ resultValues) {
			// List to store all valid product panels
			List<Panel^>^ validProductPanels = gcnew List<Panel^>();

			// Iterate through each value in resultValues
			for (int i = 0; i < resultValues->Length; i++) {
				int val = resultValues[i];
				// Get the corresponding product panel for the current value
				productPanel = GetProductPanel(val);

				// If a valid product panel is found, add it to the list
				if (productPanel != nullptr) {
					validProductPanels->Add(productPanel);
					Animation^ animation = gcnew Animation(productPanel, bottom_panel);
					animation->drop_timer->Tag = productPanel;
					animation->drop_timer->Start();
					
				}
			}

		}





	private: System::Void Kanpsack_button_Click(System::Object^ sender, System::EventArgs^ e) {
		int capacity = System::Convert::ToInt32(Capacity_textbox->Text);


		array<int>^ weights = { 5, 3, 2, 2,4 };
		array<int>^ values = { 700, 150, 60, 40,70 };
		int n = weights->Length;


		int result = knapsack(capacity, weights, values, n);

		knapsackValue_label->Text = "Knapsack Value: " + result.ToString();


		resultValues = FindValues(values, result);

		ShowProductPanels(resultValues);


	}



	

private: System::Void newUser_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

	// Start a new instance of the application
	System::Diagnostics::Process::Start(Application::ExecutablePath);
}
	   
};
}