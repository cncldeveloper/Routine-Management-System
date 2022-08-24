#pragma once
#include "Config.h"
#include "RoutineItemListView.h"
#include "RoutineItemGridView.h"
#include "Settings.h"


namespace RoutineManagementSystem {
	//
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:

		MySqlConnection^ sqlConnection = gcnew MySqlConnection();
		MySqlCommand^ sqlCommand = gcnew MySqlCommand();
		MySqlDataReader^ sqlRead;


	public:
		MyForm(void)
		{
			InitializeComponent();

			try {
				sqlConnection->ConnectionString = Config::getConnectionString();
				sqlConnection->Open();
				sqlCommand->Connection = sqlConnection;
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Connection Error.");
			}


			dataLoad();
			//
			//TODO: Add the constructor code here
			//

		}



	private: System::Windows::Forms::ComboBox^ comboBoxRoomNumber;
	private: System::Windows::Forms::Label^ labelRoomNumber;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelMain;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelLeftSide;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelHeader;
	private: System::Windows::Forms::Label^ labelNUBTK;


	private: System::Windows::Forms::ComboBox^ comboBoxTeacherName;
	private: System::Windows::Forms::Label^ labelTeacherName;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panelNav;
	private: System::Windows::Forms::Label^ labelTimeClock;
	private: System::Windows::Forms::Panel^ panelRoutineViewArea;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelRoutineViewArea;
	private: System::Windows::Forms::CheckBox^ checkBoxCurrentTime;
	private: System::Windows::Forms::Button^ buttonSettings;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}

			sqlConnection->Close();
		}








	private: System::Windows::Forms::Panel^ panelSidebar;








	private: System::Windows::Forms::Button^ buttonReset;

	private: System::Windows::Forms::Button^ buttonFind;

	private: System::Windows::Forms::ComboBox^ comboBoxEndTime;

	private: System::Windows::Forms::Label^ labelEndTime;

	private: System::Windows::Forms::ComboBox^ comboBoxStartTime;

	private: System::Windows::Forms::Label^ labelStartTime;





	private: System::Windows::Forms::ComboBox^ comboBoxLevel;

	private: System::Windows::Forms::Label^ labelLevel;

	private: System::Windows::Forms::ComboBox^ comboBoxSection;

	private: System::Windows::Forms::Label^ labelSection;

	private: System::Windows::Forms::ComboBox^ comboBoxCourse;

	private: System::Windows::Forms::Label^ labelCourse;

	private: System::Windows::Forms::ComboBox^ comboBoxSemester;

	private: System::Windows::Forms::Label^ labelSemester;






	private: System::Windows::Forms::PictureBox^ pictureBoxNUBTK;



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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelSidebar = (gcnew System::Windows::Forms::Panel());
			this->buttonSettings = (gcnew System::Windows::Forms::Button());
			this->checkBoxCurrentTime = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxTeacherName = (gcnew System::Windows::Forms::ComboBox());
			this->labelTeacherName = (gcnew System::Windows::Forms::Label());
			this->comboBoxRoomNumber = (gcnew System::Windows::Forms::ComboBox());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonFind = (gcnew System::Windows::Forms::Button());
			this->labelRoomNumber = (gcnew System::Windows::Forms::Label());
			this->comboBoxEndTime = (gcnew System::Windows::Forms::ComboBox());
			this->labelEndTime = (gcnew System::Windows::Forms::Label());
			this->comboBoxStartTime = (gcnew System::Windows::Forms::ComboBox());
			this->labelStartTime = (gcnew System::Windows::Forms::Label());
			this->comboBoxLevel = (gcnew System::Windows::Forms::ComboBox());
			this->labelLevel = (gcnew System::Windows::Forms::Label());
			this->comboBoxSection = (gcnew System::Windows::Forms::ComboBox());
			this->labelSection = (gcnew System::Windows::Forms::Label());
			this->comboBoxCourse = (gcnew System::Windows::Forms::ComboBox());
			this->labelCourse = (gcnew System::Windows::Forms::Label());
			this->comboBoxSemester = (gcnew System::Windows::Forms::ComboBox());
			this->labelSemester = (gcnew System::Windows::Forms::Label());
			this->pictureBoxNUBTK = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanelMain = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelLeftSide = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanelHeader = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelNUBTK = (gcnew System::Windows::Forms::Label());
			this->panelNav = (gcnew System::Windows::Forms::Panel());
			this->labelTimeClock = (gcnew System::Windows::Forms::Label());
			this->panelRoutineViewArea = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanelRoutineViewArea = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelSidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNUBTK))->BeginInit();
			this->tableLayoutPanelMain->SuspendLayout();
			this->tableLayoutPanelLeftSide->SuspendLayout();
			this->tableLayoutPanelHeader->SuspendLayout();
			this->panelNav->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelSidebar
			// 
			this->panelSidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->panelSidebar->Controls->Add(this->buttonSettings);
			this->panelSidebar->Controls->Add(this->checkBoxCurrentTime);
			this->panelSidebar->Controls->Add(this->comboBoxTeacherName);
			this->panelSidebar->Controls->Add(this->labelTeacherName);
			this->panelSidebar->Controls->Add(this->comboBoxRoomNumber);
			this->panelSidebar->Controls->Add(this->buttonReset);
			this->panelSidebar->Controls->Add(this->buttonFind);
			this->panelSidebar->Controls->Add(this->labelRoomNumber);
			this->panelSidebar->Controls->Add(this->comboBoxEndTime);
			this->panelSidebar->Controls->Add(this->labelEndTime);
			this->panelSidebar->Controls->Add(this->comboBoxStartTime);
			this->panelSidebar->Controls->Add(this->labelStartTime);
			this->panelSidebar->Controls->Add(this->comboBoxLevel);
			this->panelSidebar->Controls->Add(this->labelLevel);
			this->panelSidebar->Controls->Add(this->comboBoxSection);
			this->panelSidebar->Controls->Add(this->labelSection);
			this->panelSidebar->Controls->Add(this->comboBoxCourse);
			this->panelSidebar->Controls->Add(this->labelCourse);
			this->panelSidebar->Controls->Add(this->comboBoxSemester);
			this->panelSidebar->Controls->Add(this->labelSemester);
			this->panelSidebar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelSidebar->Location = System::Drawing::Point(1034, 3);
			this->panelSidebar->Name = L"panelSidebar";
			this->panelSidebar->Size = System::Drawing::Size(333, 735);
			this->panelSidebar->TabIndex = 4;
			// 
			// buttonSettings
			// 
			this->buttonSettings->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSettings.BackgroundImage")));
			this->buttonSettings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonSettings->FlatAppearance->BorderSize = 0;
			this->buttonSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSettings->Location = System::Drawing::Point(301, 6);
			this->buttonSettings->Name = L"buttonSettings";
			this->buttonSettings->Size = System::Drawing::Size(23, 23);
			this->buttonSettings->TabIndex = 24;
			this->buttonSettings->UseVisualStyleBackColor = false;
			this->buttonSettings->Click += gcnew System::EventHandler(this, &MyForm::buttonSettingsClick);
			// 
			// checkBoxCurrentTime
			// 
			this->checkBoxCurrentTime->AutoSize = true;
			this->checkBoxCurrentTime->Checked = true;
			this->checkBoxCurrentTime->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxCurrentTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxCurrentTime->ForeColor = System::Drawing::Color::White;
			this->checkBoxCurrentTime->Location = System::Drawing::Point(26, 626);
			this->checkBoxCurrentTime->Name = L"checkBoxCurrentTime";
			this->checkBoxCurrentTime->Size = System::Drawing::Size(136, 28);
			this->checkBoxCurrentTime->TabIndex = 23;
			this->checkBoxCurrentTime->Text = L"Current Time";
			this->checkBoxCurrentTime->UseVisualStyleBackColor = true;
			// 
			// comboBoxTeacherName
			// 
			this->comboBoxTeacherName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxTeacherName->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxTeacherName->FormattingEnabled = true;
			this->comboBoxTeacherName->Location = System::Drawing::Point(26, 571);
			this->comboBoxTeacherName->Name = L"comboBoxTeacherName";
			this->comboBoxTeacherName->Size = System::Drawing::Size(269, 36);
			this->comboBoxTeacherName->TabIndex = 21;
			// 
			// labelTeacherName
			// 
			this->labelTeacherName->AutoSize = true;
			this->labelTeacherName->BackColor = System::Drawing::Color::Transparent;
			this->labelTeacherName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelTeacherName->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTeacherName->ForeColor = System::Drawing::Color::White;
			this->labelTeacherName->Location = System::Drawing::Point(21, 543);
			this->labelTeacherName->Name = L"labelTeacherName";
			this->labelTeacherName->Size = System::Drawing::Size(145, 28);
			this->labelTeacherName->TabIndex = 20;
			this->labelTeacherName->Text = L"Teacher Name";
			// 
			// comboBoxRoomNumber
			// 
			this->comboBoxRoomNumber->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxRoomNumber->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxRoomNumber->FormattingEnabled = true;
			this->comboBoxRoomNumber->Location = System::Drawing::Point(26, 345);
			this->comboBoxRoomNumber->Name = L"comboBoxRoomNumber";
			this->comboBoxRoomNumber->Size = System::Drawing::Size(269, 36);
			this->comboBoxRoomNumber->TabIndex = 19;
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::White;
			this->buttonReset->FlatAppearance->BorderSize = 0;
			this->buttonReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReset->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->buttonReset->Location = System::Drawing::Point(187, 674);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(108, 36);
			this->buttonReset->TabIndex = 17;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonFind
			// 
			this->buttonFind->BackColor = System::Drawing::Color::White;
			this->buttonFind->FlatAppearance->BorderSize = 0;
			this->buttonFind->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFind->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFind->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->buttonFind->Location = System::Drawing::Point(26, 674);
			this->buttonFind->Name = L"buttonFind";
			this->buttonFind->Size = System::Drawing::Size(108, 36);
			this->buttonFind->TabIndex = 16;
			this->buttonFind->Text = L"Find";
			this->buttonFind->UseVisualStyleBackColor = false;
			this->buttonFind->Click += gcnew System::EventHandler(this, &MyForm::buttonFind_Click);
			// 
			// labelRoomNumber
			// 
			this->labelRoomNumber->AutoSize = true;
			this->labelRoomNumber->BackColor = System::Drawing::Color::Transparent;
			this->labelRoomNumber->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelRoomNumber->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoomNumber->ForeColor = System::Drawing::Color::White;
			this->labelRoomNumber->Location = System::Drawing::Point(21, 317);
			this->labelRoomNumber->Name = L"labelRoomNumber";
			this->labelRoomNumber->Size = System::Drawing::Size(148, 28);
			this->labelRoomNumber->TabIndex = 18;
			this->labelRoomNumber->Text = L"Room Number";
			// 
			// comboBoxEndTime
			// 
			this->comboBoxEndTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxEndTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxEndTime->FormattingEnabled = true;
			this->comboBoxEndTime->Location = System::Drawing::Point(26, 497);
			this->comboBoxEndTime->Name = L"comboBoxEndTime";
			this->comboBoxEndTime->Size = System::Drawing::Size(269, 36);
			this->comboBoxEndTime->TabIndex = 15;
			// 
			// labelEndTime
			// 
			this->labelEndTime->AutoSize = true;
			this->labelEndTime->BackColor = System::Drawing::Color::Transparent;
			this->labelEndTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelEndTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEndTime->ForeColor = System::Drawing::Color::White;
			this->labelEndTime->Location = System::Drawing::Point(21, 469);
			this->labelEndTime->Name = L"labelEndTime";
			this->labelEndTime->Size = System::Drawing::Size(99, 28);
			this->labelEndTime->TabIndex = 14;
			this->labelEndTime->Text = L"End Time";
			// 
			// comboBoxStartTime
			// 
			this->comboBoxStartTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxStartTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxStartTime->FormattingEnabled = true;
			this->comboBoxStartTime->Location = System::Drawing::Point(26, 422);
			this->comboBoxStartTime->Name = L"comboBoxStartTime";
			this->comboBoxStartTime->Size = System::Drawing::Size(269, 36);
			this->comboBoxStartTime->TabIndex = 13;
			// 
			// labelStartTime
			// 
			this->labelStartTime->AutoSize = true;
			this->labelStartTime->BackColor = System::Drawing::Color::Transparent;
			this->labelStartTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelStartTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelStartTime->ForeColor = System::Drawing::Color::White;
			this->labelStartTime->Location = System::Drawing::Point(21, 394);
			this->labelStartTime->Name = L"labelStartTime";
			this->labelStartTime->Size = System::Drawing::Size(110, 28);
			this->labelStartTime->TabIndex = 12;
			this->labelStartTime->Text = L"Start Time";
			// 
			// comboBoxLevel
			// 
			this->comboBoxLevel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxLevel->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxLevel->FormattingEnabled = true;
			this->comboBoxLevel->Location = System::Drawing::Point(26, 262);
			this->comboBoxLevel->Name = L"comboBoxLevel";
			this->comboBoxLevel->Size = System::Drawing::Size(269, 36);
			this->comboBoxLevel->TabIndex = 9;
			this->comboBoxLevel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxLevel_SelectedIndexChanged);
			this->comboBoxLevel->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBoxLevel_SelectedIndexChanged);
			// 
			// labelLevel
			// 
			this->labelLevel->AutoSize = true;
			this->labelLevel->BackColor = System::Drawing::Color::Transparent;
			this->labelLevel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelLevel->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLevel->ForeColor = System::Drawing::Color::White;
			this->labelLevel->Location = System::Drawing::Point(21, 234);
			this->labelLevel->Name = L"labelLevel";
			this->labelLevel->Size = System::Drawing::Size(61, 28);
			this->labelLevel->TabIndex = 8;
			this->labelLevel->Text = L"Level";
			// 
			// comboBoxSection
			// 
			this->comboBoxSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxSection->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxSection->FormattingEnabled = true;
			this->comboBoxSection->Location = System::Drawing::Point(26, 184);
			this->comboBoxSection->Name = L"comboBoxSection";
			this->comboBoxSection->Size = System::Drawing::Size(269, 36);
			this->comboBoxSection->TabIndex = 7;
			// 
			// labelSection
			// 
			this->labelSection->AutoSize = true;
			this->labelSection->BackColor = System::Drawing::Color::Transparent;
			this->labelSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelSection->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSection->ForeColor = System::Drawing::Color::White;
			this->labelSection->Location = System::Drawing::Point(21, 156);
			this->labelSection->Name = L"labelSection";
			this->labelSection->Size = System::Drawing::Size(83, 28);
			this->labelSection->TabIndex = 6;
			this->labelSection->Text = L"Section";
			// 
			// comboBoxCourse
			// 
			this->comboBoxCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxCourse->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCourse->FormattingEnabled = true;
			this->comboBoxCourse->Location = System::Drawing::Point(26, 110);
			this->comboBoxCourse->Name = L"comboBoxCourse";
			this->comboBoxCourse->Size = System::Drawing::Size(269, 36);
			this->comboBoxCourse->TabIndex = 5;
			// 
			// labelCourse
			// 
			this->labelCourse->AutoSize = true;
			this->labelCourse->BackColor = System::Drawing::Color::Transparent;
			this->labelCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelCourse->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCourse->ForeColor = System::Drawing::Color::White;
			this->labelCourse->Location = System::Drawing::Point(21, 82);
			this->labelCourse->Name = L"labelCourse";
			this->labelCourse->Size = System::Drawing::Size(77, 28);
			this->labelCourse->TabIndex = 4;
			this->labelCourse->Text = L"Course";
			// 
			// comboBoxSemester
			// 
			this->comboBoxSemester->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxSemester->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxSemester->FormattingEnabled = true;
			this->comboBoxSemester->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fall", L"Spring", L"Summer" });
			this->comboBoxSemester->Location = System::Drawing::Point(26, 34);
			this->comboBoxSemester->Name = L"comboBoxSemester";
			this->comboBoxSemester->Size = System::Drawing::Size(269, 36);
			this->comboBoxSemester->TabIndex = 3;
			// 
			// labelSemester
			// 
			this->labelSemester->AutoSize = true;
			this->labelSemester->BackColor = System::Drawing::Color::Transparent;
			this->labelSemester->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelSemester->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSemester->ForeColor = System::Drawing::Color::White;
			this->labelSemester->Location = System::Drawing::Point(21, 6);
			this->labelSemester->Name = L"labelSemester";
			this->labelSemester->Size = System::Drawing::Size(101, 28);
			this->labelSemester->TabIndex = 2;
			this->labelSemester->Text = L"Semester";
			// 
			// pictureBoxNUBTK
			// 
			this->pictureBoxNUBTK->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBoxNUBTK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxNUBTK.Image")));
			this->pictureBoxNUBTK->Location = System::Drawing::Point(147, 3);
			this->pictureBoxNUBTK->Name = L"pictureBoxNUBTK";
			this->pictureBoxNUBTK->Size = System::Drawing::Size(81, 70);
			this->pictureBoxNUBTK->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxNUBTK->TabIndex = 1;
			this->pictureBoxNUBTK->TabStop = false;
			// 
			// tableLayoutPanelMain
			// 
			this->tableLayoutPanelMain->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanelMain->ColumnCount = 2;
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				339)));
			this->tableLayoutPanelMain->Controls->Add(this->tableLayoutPanelLeftSide, 0, 0);
			this->tableLayoutPanelMain->Controls->Add(this->panelSidebar, 1, 0);
			this->tableLayoutPanelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanelMain->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelMain->Name = L"tableLayoutPanelMain";
			this->tableLayoutPanelMain->RowCount = 1;
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelMain->Size = System::Drawing::Size(1370, 741);
			this->tableLayoutPanelMain->TabIndex = 5;
			// 
			// tableLayoutPanelLeftSide
			// 
			this->tableLayoutPanelLeftSide->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanelLeftSide->ColumnCount = 1;
			this->tableLayoutPanelLeftSide->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelLeftSide->Controls->Add(this->tableLayoutPanelHeader, 0, 0);
			this->tableLayoutPanelLeftSide->Controls->Add(this->panelNav, 1, 1);
			this->tableLayoutPanelLeftSide->Controls->Add(this->panelRoutineViewArea, 0, 2);
			this->tableLayoutPanelLeftSide->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanelLeftSide->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanelLeftSide->Name = L"tableLayoutPanelLeftSide";
			this->tableLayoutPanelLeftSide->RowCount = 3;
			this->tableLayoutPanelLeftSide->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				11.20567F)));
			this->tableLayoutPanelLeftSide->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				8.027211F)));
			this->tableLayoutPanelLeftSide->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				80.81633F)));
			this->tableLayoutPanelLeftSide->Size = System::Drawing::Size(1025, 735);
			this->tableLayoutPanelLeftSide->TabIndex = 5;
			// 
			// tableLayoutPanelHeader
			// 
			this->tableLayoutPanelHeader->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanelHeader->ColumnCount = 2;
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelHeader->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanelHeader->Controls->Add(this->labelNUBTK, 1, 0);
			this->tableLayoutPanelHeader->Controls->Add(this->pictureBoxNUBTK, 0, 0);
			this->tableLayoutPanelHeader->Dock = System::Windows::Forms::DockStyle::Left;
			this->tableLayoutPanelHeader->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanelHeader->Name = L"tableLayoutPanelHeader";
			this->tableLayoutPanelHeader->RowCount = 1;
			this->tableLayoutPanelHeader->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelHeader->Size = System::Drawing::Size(1013, 76);
			this->tableLayoutPanelHeader->TabIndex = 0;
			// 
			// labelNUBTK
			// 
			this->labelNUBTK->AutoSize = true;
			this->labelNUBTK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNUBTK->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNUBTK->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelNUBTK->Location = System::Drawing::Point(234, 0);
			this->labelNUBTK->Name = L"labelNUBTK";
			this->labelNUBTK->Size = System::Drawing::Size(776, 76);
			this->labelNUBTK->TabIndex = 0;
			this->labelNUBTK->Text = L"NUBTK Routine Management System";
			this->labelNUBTK->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelNav
			// 
			this->panelNav->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->panelNav->Controls->Add(this->labelTimeClock);
			this->panelNav->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelNav->Location = System::Drawing::Point(3, 85);
			this->panelNav->Name = L"panelNav";
			this->panelNav->Size = System::Drawing::Size(1019, 52);
			this->panelNav->TabIndex = 3;
			// 
			// labelTimeClock
			// 
			this->labelTimeClock->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->labelTimeClock->AutoSize = true;
			this->labelTimeClock->BackColor = System::Drawing::Color::Transparent;
			this->labelTimeClock->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTimeClock->ForeColor = System::Drawing::Color::White;
			this->labelTimeClock->Location = System::Drawing::Point(591, 12);
			this->labelTimeClock->Name = L"labelTimeClock";
			this->labelTimeClock->Size = System::Drawing::Size(115, 28);
			this->labelTimeClock->TabIndex = 0;
			this->labelTimeClock->Text = L"DATE TIME";
			this->labelTimeClock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelRoutineViewArea
			// 
			this->panelRoutineViewArea->AllowDrop = true;
			this->panelRoutineViewArea->AutoScroll = true;
			this->panelRoutineViewArea->BackColor = System::Drawing::Color::Transparent;
			this->panelRoutineViewArea->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelRoutineViewArea->Location = System::Drawing::Point(3, 143);
			this->panelRoutineViewArea->Name = L"panelRoutineViewArea";
			this->panelRoutineViewArea->Size = System::Drawing::Size(1019, 589);
			this->panelRoutineViewArea->TabIndex = 4;
			// 
			// flowLayoutPanelRoutineViewArea
			// 
			this->flowLayoutPanelRoutineViewArea->AutoScroll = true;
			this->flowLayoutPanelRoutineViewArea->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanelRoutineViewArea->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanelRoutineViewArea->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanelRoutineViewArea->Name = L"flowLayoutPanelRoutineViewArea";
			this->flowLayoutPanelRoutineViewArea->Size = System::Drawing::Size(1019, 589);
			this->flowLayoutPanelRoutineViewArea->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::tickTimeClock);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1370, 741);
			this->Controls->Add(this->tableLayoutPanelMain);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1388, 788);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NUBTK Routine Management System";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::formClosedEvent);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::routineViewAreaResizeEvent);
			this->panelSidebar->ResumeLayout(false);
			this->panelSidebar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNUBTK))->EndInit();
			this->tableLayoutPanelMain->ResumeLayout(false);
			this->tableLayoutPanelLeftSide->ResumeLayout(false);
			this->tableLayoutPanelHeader->ResumeLayout(false);
			this->tableLayoutPanelHeader->PerformLayout();
			this->panelNav->ResumeLayout(false);
			this->panelNav->PerformLayout();
			this->ResumeLayout(false);

		}

		// Course
		void comboBoxCourseData() {




			sqlCommand->CommandText = "SELECT * FROM departments ORDER BY id";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxCourse->Items->Add(sqlRead["department_short_name"]->ToString());
			}

			sqlRead->Close();
		}

		// Section
		void comboBoxSectionData() {

			sqlCommand->CommandText = "SELECT * FROM sections ORDER BY id";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxSection->Items->Add(sqlRead["section_name"]->ToString());
			}

			sqlRead->Close();
		}

		// Level
		void comboBoxLevelData() {

			sqlCommand->CommandText = "SELECT DISTINCT(level) FROM  class_rooms ORDER BY level";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxLevel->Items->Add(sqlRead["level"]->ToString());
			}

			sqlRead->Close();
		}

		// Room Number
		void comboBoxRoomNumberData() {

			sqlCommand->CommandText = "SELECT DISTINCT(room_name) FROM  class_rooms ORDER BY room_name";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxRoomNumber->Items->Add(sqlRead["room_name"]->ToString());
			}

			sqlRead->Close();
		}

		// Start Time
		void comboBoxStartTimelData() {

			sqlCommand->CommandText = "SELECT DISTINCT(start_time), start_time_12 FROM view_routines WHERE semester_year=YEAR(cURDATE()) ORDER BY start_time;";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxStartTime->Items->Add(sqlRead["start_time_12"]->ToString());
			}

			sqlRead->Close();
		}

		// End Time
		void comboBoxEndTimelData() {

			sqlCommand->CommandText = "SELECT DISTINCT(end_time), end_time_12 FROM view_routines WHERE semester_year=YEAR(cURDATE()) ORDER BY end_time;";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxEndTime->Items->Add(sqlRead["end_time_12"]->ToString());
			}

			sqlRead->Close();
		}

		// Teacher Name
		void comboBoxTeacherNameData() {

			sqlCommand->CommandText = "SELECT * from teachers WHERE status=1 ORDER BY id";
			sqlRead = sqlCommand->ExecuteReader();

			while (sqlRead->Read()) {
				comboBoxTeacherName->Items->Add(sqlRead["short_name"]->ToString() + " - " + sqlRead["full_name"]->ToString());
			}

			sqlRead->Close();
		}

		// Current Time Routine
		void routineDefaultView() {

			String^ sql = "SELECT * FROM view_routines WHERE days=DAYNAME(CURDATE()) AND (CURTIME() BETWEEN start_time AND end_time) ORDER BY start_time LIMIT " + Config::getSettings(2);

			if (Config::getSettings(1) == "Grid View") {
				routineGridView(sql);
			}
			else {
				routineListView(sql);
			}
		}



		void dataLoad() {
			comboBoxCourseData();
			comboBoxSectionData();
			comboBoxLevelData();
			comboBoxRoomNumberData();
			comboBoxStartTimelData();
			comboBoxEndTimelData();
			comboBoxTeacherNameData();
			routineDefaultView();
		}



#pragma endregion
	private: System::Void comboBoxLevel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ level = comboBoxLevel->Text;

		if (level == "") {
			comboBoxRoomNumber->Items->Clear(); // Clear previouse items
			comboBoxRoomNumberData();
		}
		else {
			sqlCommand->CommandText = "SELECT DISTINCT(room_name) FROM  class_rooms WHERE level=@level ORDER BY room_name";
			sqlCommand->Parameters->AddWithValue("level", level);
			sqlRead = sqlCommand->ExecuteReader();
			sqlCommand->Parameters->Clear();

			comboBoxRoomNumber->Items->Clear(); // Clear previouse items
			comboBoxRoomNumber->Text = "";

			while (sqlRead->Read()) {
				comboBoxRoomNumber->Items->Add(sqlRead["room_name"]->ToString());
			}

			sqlRead->Close();
		}
	}

	private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		comboBoxSemester->Text = "";
		comboBoxCourse->Text = "";
		comboBoxSection->Text = "";
		comboBoxLevel->Text = "";
		comboBoxRoomNumber->Text = "";
		comboBoxStartTime->Text = "";
		comboBoxEndTime->Text = "";
		comboBoxTeacherName->Text = "";
	}


		   void routineGridView(String^ sql) {
			   this->panelRoutineViewArea->Controls->Clear();
			   this->panelRoutineViewArea->Controls->Add(this->flowLayoutPanelRoutineViewArea);
			   this->flowLayoutPanelRoutineViewArea->Controls->Clear(); // Clear previouse data


			   int i = 0;

			   sqlCommand->CommandText = sql;
			   sqlRead = sqlCommand->ExecuteReader();


			   while (sqlRead->Read()) {
				   RoutineItemGridView^ item = gcnew RoutineItemGridView(sqlRead);
				   item->Size = System::Drawing::Size(370, 200);
				   this->flowLayoutPanelRoutineViewArea->Controls->Add(item);
				   i++;
			   }

			   sqlRead->Close();
		   }

		   void routineListView(String^ sql) {
			   this->panelRoutineViewArea->Controls->Clear(); // Clear previouse data
			   this->flowLayoutPanelRoutineViewArea->Controls->Clear();

			   int i = 0;

			   sqlCommand->CommandText = sql;
			   sqlRead = sqlCommand->ExecuteReader();


			   while (sqlRead->Read()) {

				   RoutineItemListView^ item = gcnew RoutineItemListView(sqlRead);
				   item->Location = System::Drawing::Point(0, i * 150);
				   item->Dock = System::Windows::Forms::DockStyle::Top;
				   this->panelRoutineViewArea->Controls->Add(item);
				   i++;
			   }

			   sqlRead->Close();
		   }


	private: System::Void buttonFind_Click(System::Object^ sender, System::EventArgs^ e) {

		bool selected = 0;

		String^ sql = "SELECT * FROM view_routines WHERE semester_year=YEAR(CURDATE())";

		if (comboBoxSemester->Text != "") {
			selected = 1;
			sql += " AND semester='" + comboBoxSemester->Text + "'";
		}

		if (comboBoxCourse->Text != "") {
			selected = 1;
			sql += " AND department_short_name='" + comboBoxCourse->Text + "'";
		}

		if (comboBoxSection->Text != "") {
			selected = 1;
			sql += " AND section_name='" + comboBoxSection->Text + "'";
		}

		if (comboBoxLevel->Text != "") {
			selected = 1;
			sql += " AND level='" + comboBoxLevel->Text + "'";
		}

		if (comboBoxRoomNumber->Text != "") {
			selected = 1;
			sql += " AND room_name='" + comboBoxRoomNumber->Text + "'";
		}

		if (comboBoxStartTime->Text != "") {
			selected = 1;
			sql += " AND start_time_12='" + comboBoxStartTime->Text + "'";
		}

		if (comboBoxEndTime->Text != "") {
			selected = 1;
			sql += " AND end_time_12='" + comboBoxEndTime->Text + "'";
		}

		if (comboBoxTeacherName->Text != "") {
			selected = 1;
			// CB - Chanchal Biswas [Crop: CB - Output:Chanchal Biswas
			String^ teacher = comboBoxTeacherName->Text->Substring(comboBoxTeacherName->Text->IndexOf(" - ") + 3);


			sql += " AND teacher_full_name='" + teacher + "'";
		}

		if (checkBoxCurrentTime->Checked == true) {
			sql += " AND days=DAYNAME(CURDATE()) AND (CURTIME() BETWEEN start_time AND end_time)";
		}

		sql += " LIMIT " + Config::getSettings(2);

		// Searching Routine Query
		if (Config::getSettings(1) == "Grid View") {
			routineGridView(sql);
		}
		else {
			routineListView(sql);
		}

	}

	private: System::Void tickTimeClock(System::Object^ sender, System::EventArgs^ e) {

		this->labelTimeClock->Text = DateTime::Now.ToString("dddd, dd MMMM yyyy hh:mm:ss tt");
	}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			timer1->Start();
		}

		private: System::Void routineViewAreaResizeEvent(System::Object^ sender, System::EventArgs^ e) {
			//panelRoutineViewArea->Width = panelRoutineViewArea->Width;
		}
		private: System::Void formClosedEvent(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			Application::Exit();
		}
		private: System::Void buttonSettingsClick(System::Object^ sender, System::EventArgs^ e) {
			Settings^ settings = gcnew Settings();
			settings->Show();
		}
};
}


/*
SELECT room_name FROM class_rooms WHERE level=5 AND room_name
NOT IN (SELECT room_name from view_routines WHERE "09:00:00" between start_time AND end_time AND level=5 AND days="Saturday");

SELECT * from view_routines WHERE "09:00:00" between start_time AND end_time AND days="Saturday"
*/