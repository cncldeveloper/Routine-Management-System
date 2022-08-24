#pragma once
#include "Config.h"

namespace RoutineManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{

	private:
			MySqlConnection^ sqlConnection = gcnew MySqlConnection();
			MySqlCommand^ sqlCommand = gcnew MySqlCommand();
			 MySqlDataReader^ sqlRead;
	public:
		Settings(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			sqlConnection->ConnectionString = Config::getConnectionString();
			sqlConnection->Open();
			sqlCommand->Connection = sqlConnection;

			dataLoad();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelGeneralSettings;

	private: System::Windows::Forms::Label^ labelLayoutStyle;
	private: System::Windows::Forms::ComboBox^ comboBoxLayoutStyle;


	private: System::Windows::Forms::Label^ labelMaxRecShow;
	private: System::Windows::Forms::ComboBox^ comboBoxMaxRecShow;
	private: System::Windows::Forms::Button^ buttonGeneralSettingsSave;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelMaxRecShow = (gcnew System::Windows::Forms::Label());
			this->comboBoxMaxRecShow = (gcnew System::Windows::Forms::ComboBox());
			this->buttonGeneralSettingsSave = (gcnew System::Windows::Forms::Button());
			this->labelLayoutStyle = (gcnew System::Windows::Forms::Label());
			this->comboBoxLayoutStyle = (gcnew System::Windows::Forms::ComboBox());
			this->labelGeneralSettings = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				27.32919F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				72.67081F)));
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(965, 510);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(257, 506);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 165);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(257, 55);
			this->button4->TabIndex = 3;
			this->button4->Text = L"About";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 110);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(257, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Developers";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 55);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(257, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Database";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"General Settings";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->panel2->Controls->Add(this->labelMaxRecShow);
			this->panel2->Controls->Add(this->comboBoxMaxRecShow);
			this->panel2->Controls->Add(this->buttonGeneralSettingsSave);
			this->panel2->Controls->Add(this->labelLayoutStyle);
			this->panel2->Controls->Add(this->comboBoxLayoutStyle);
			this->panel2->Controls->Add(this->labelGeneralSettings);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(266, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(696, 506);
			this->panel2->TabIndex = 1;
			// 
			// labelMaxRecShow
			// 
			this->labelMaxRecShow->AutoSize = true;
			this->labelMaxRecShow->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMaxRecShow->Location = System::Drawing::Point(20, 148);
			this->labelMaxRecShow->Name = L"labelMaxRecShow";
			this->labelMaxRecShow->Size = System::Drawing::Size(233, 28);
			this->labelMaxRecShow->TabIndex = 6;
			this->labelMaxRecShow->Text = L"Maximum Record Show";
			// 
			// comboBoxMaxRecShow
			// 
			this->comboBoxMaxRecShow->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxMaxRecShow->FormattingEnabled = true;
			this->comboBoxMaxRecShow->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10", L"30", L"50", L"100" });
			this->comboBoxMaxRecShow->Location = System::Drawing::Point(275, 140);
			this->comboBoxMaxRecShow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBoxMaxRecShow->Name = L"comboBoxMaxRecShow";
			this->comboBoxMaxRecShow->Size = System::Drawing::Size(316, 36);
			this->comboBoxMaxRecShow->TabIndex = 5;
			// 
			// buttonGeneralSettingsSave
			// 
			this->buttonGeneralSettingsSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonGeneralSettingsSave->FlatAppearance->BorderSize = 0;
			this->buttonGeneralSettingsSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGeneralSettingsSave->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGeneralSettingsSave->ForeColor = System::Drawing::Color::White;
			this->buttonGeneralSettingsSave->Location = System::Drawing::Point(451, 210);
			this->buttonGeneralSettingsSave->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonGeneralSettingsSave->Name = L"buttonGeneralSettingsSave";
			this->buttonGeneralSettingsSave->Size = System::Drawing::Size(141, 41);
			this->buttonGeneralSettingsSave->TabIndex = 4;
			this->buttonGeneralSettingsSave->Text = L"Save";
			this->buttonGeneralSettingsSave->UseVisualStyleBackColor = false;
			this->buttonGeneralSettingsSave->Click += gcnew System::EventHandler(this, &Settings::buttonGeneralSettingsSave_Click);
			// 
			// labelLayoutStyle
			// 
			this->labelLayoutStyle->AutoSize = true;
			this->labelLayoutStyle->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLayoutStyle->Location = System::Drawing::Point(20, 89);
			this->labelLayoutStyle->Name = L"labelLayoutStyle";
			this->labelLayoutStyle->Size = System::Drawing::Size(129, 28);
			this->labelLayoutStyle->TabIndex = 3;
			this->labelLayoutStyle->Text = L"Layout Style";
			// 
			// comboBoxLayoutStyle
			// 
			this->comboBoxLayoutStyle->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxLayoutStyle->FormattingEnabled = true;
			this->comboBoxLayoutStyle->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"List View", L"Grid View" });
			this->comboBoxLayoutStyle->Location = System::Drawing::Point(275, 85);
			this->comboBoxLayoutStyle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBoxLayoutStyle->Name = L"comboBoxLayoutStyle";
			this->comboBoxLayoutStyle->Size = System::Drawing::Size(316, 36);
			this->comboBoxLayoutStyle->TabIndex = 2;
			// 
			// labelGeneralSettings
			// 
			this->labelGeneralSettings->AutoSize = true;
			this->labelGeneralSettings->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGeneralSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"labelGeneralSettings.Image")));
			this->labelGeneralSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->labelGeneralSettings->Location = System::Drawing::Point(19, 16);
			this->labelGeneralSettings->Name = L"labelGeneralSettings";
			this->labelGeneralSettings->Size = System::Drawing::Size(276, 39);
			this->labelGeneralSettings->TabIndex = 1;
			this->labelGeneralSettings->Text = L"     General Settings";
			this->labelGeneralSettings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(965, 510);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Settings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Settings";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}

		void dataLoad() {
			comboBoxLayoutStyle->Text = Config::getSettings(1);
			comboBoxMaxRecShow->Text = Config::getSettings(2);
		}

#pragma endregion
	private: System::Void buttonGeneralSettingsSave_Click(System::Object^ sender, System::EventArgs^ e) {

		if (comboBoxLayoutStyle->Text != "Grid View" && comboBoxLayoutStyle->Text != "List View") {
			MessageBox::Show("Invalid layout selection");
		}
		else if (comboBoxMaxRecShow->Text != "10" && comboBoxMaxRecShow->Text != "30" &&
			comboBoxMaxRecShow->Text != "50" && comboBoxMaxRecShow->Text != "100")
		{
			MessageBox::Show("Invalid maximum record show selection");
		}
		else {
			sqlCommand->CommandText = "UPDATE settings SET setting_value='" + comboBoxLayoutStyle->Text + "' WHERE id=1";
			sqlRead = sqlCommand->ExecuteReader();
			sqlRead->Close();

			sqlCommand->CommandText = "UPDATE settings SET setting_value='" + comboBoxMaxRecShow->Text + "' WHERE id=2";
			sqlCommand->CommandText = "UPDATE settings SET setting_value='" + comboBoxMaxRecShow->Text + "' WHERE id=2";
			sqlRead = sqlCommand->ExecuteReader();
			sqlRead->Close();

			MessageBox::Show("General settings saved success.");
		}
		
		

	}
};
}
