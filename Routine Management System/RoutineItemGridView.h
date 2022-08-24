#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

namespace RoutineManagementSystem {

	/// <summary>
	/// Summary for RoutineItemGridView
	/// </summary>
	public ref class RoutineItemGridView : public System::Windows::Forms::UserControl
	{
	private:
		String^ dataSection;
		String^ dataDepartment;
		String^ dataLevel;
		String^ dataRoom;
		String^ dataTime;
		String^ dataSemester;
		String^ dataTeacherName;
		String^ dataTeacherDesignation;
		String^ dataCourse;
		String^ dataMobile;

	public:
		RoutineItemGridView(MySqlDataReader^ sqlRead)
		{
			dataSection = sqlRead["section_name"]->ToString();
			dataDepartment = sqlRead["department_short_name"]->ToString();
			dataLevel = sqlRead["level"]->ToString();
			dataRoom = sqlRead["room_name"]->ToString();
			dataTime = sqlRead["start_time_12"]->ToString() + " - " + sqlRead["end_time_12"]->ToString() + ", " + sqlRead["days"]->ToString();
			dataSemester = sqlRead["semester"]->ToString() + " " + sqlRead["semester_year"]->ToString();
			dataTeacherName = sqlRead["teacher_short_name"]->ToString() + " - " + sqlRead["teacher_full_name"]->ToString();
			dataTeacherDesignation = sqlRead["teacher_designation"]->ToString();
			dataCourse = sqlRead["course_code"]->ToString() + " - " + sqlRead["course_title"]->ToString();
			dataMobile = sqlRead["teacher_mobile_number"]->ToString();


			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


			dataLoad();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RoutineItemGridView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelTime;

	private: System::Windows::Forms::Label^ labelSectionAndDepartment;

	private: System::Windows::Forms::Label^ labelRoom;

	private: System::Windows::Forms::Label^ labelLevel;
	private: System::Windows::Forms::Label^ labelProgram;


	private: System::Windows::Forms::Label^ labelTeacherName;



	protected:

	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelLevel = (gcnew System::Windows::Forms::Label());
			this->labelRoom = (gcnew System::Windows::Forms::Label());
			this->labelSectionAndDepartment = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->labelTeacherName = (gcnew System::Windows::Forms::Label());
			this->labelProgram = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel1->Controls->Add(this->labelProgram);
			this->panel1->Controls->Add(this->labelTeacherName);
			this->panel1->Controls->Add(this->labelTime);
			this->panel1->Controls->Add(this->labelSectionAndDepartment);
			this->panel1->Controls->Add(this->labelRoom);
			this->panel1->Controls->Add(this->labelLevel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1047, 509);
			this->panel1->TabIndex = 0;
			// 
			// labelLevel
			// 
			this->labelLevel->AutoSize = true;
			this->labelLevel->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLevel->Location = System::Drawing::Point(13, 16);
			this->labelLevel->Name = L"labelLevel";
			this->labelLevel->Size = System::Drawing::Size(97, 32);
			this->labelLevel->TabIndex = 0;
			
			// 
			// labelRoom
			// 
			this->labelRoom->AutoSize = true;
			this->labelRoom->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoom->Location = System::Drawing::Point(156, 16);
			this->labelRoom->Name = L"labelRoom";
			this->labelRoom->Size = System::Drawing::Size(204, 32);
			this->labelRoom->TabIndex = 1;
			
			// 
			// labelSectionAndDepartment
			// 
			this->labelSectionAndDepartment->AutoSize = true;
			this->labelSectionAndDepartment->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 22.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSectionAndDepartment->Location = System::Drawing::Point(11, 48);
			this->labelSectionAndDepartment->Name = L"labelSectionAndDepartment";
			this->labelSectionAndDepartment->Size = System::Drawing::Size(174, 53);
			this->labelSectionAndDepartment->TabIndex = 2;
			
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTime->ForeColor = System::Drawing::Color::Green;
			this->labelTime->Location = System::Drawing::Point(12, 92);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(197, 28);
			this->labelTime->TabIndex = 3;
			
			// 
			// labelTeacherName
			// 
			this->labelTeacherName->AutoSize = true;
			this->labelTeacherName->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTeacherName->Location = System::Drawing::Point(14, 143);
			this->labelTeacherName->Name = L"labelTeacherName";
			this->labelTeacherName->Size = System::Drawing::Size(240, 28);
			this->labelTeacherName->TabIndex = 4;
			
			// 
			// labelProgram
			// 
			this->labelProgram->AutoSize = true;
			this->labelProgram->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelProgram->Location = System::Drawing::Point(14, 177);
			this->labelProgram->Name = L"labelProgram";
			this->labelProgram->Size = System::Drawing::Size(408, 28);
			this->labelProgram->TabIndex = 5;
			
			// 
			// RoutineItemGridView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"RoutineItemGridView";
			this->Size = System::Drawing::Size(1047, 509);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}

		void dataLoad() {
			this->labelLevel->Text = L"Level: " + dataLevel;
			this->labelRoom->Text = L"Room: " + dataRoom;
			this->labelSectionAndDepartment->Text = dataSection + " - " + dataDepartment;
			this->labelTime->Text = dataTime;
			this->labelTeacherName->Text = dataTeacherName;
			this->labelProgram->Text = dataCourse;
		}
#pragma endregion
	};
}
