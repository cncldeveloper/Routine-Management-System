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
	/// Summary for RoutineItem
	/// </summary>
	public ref class RoutineItemListView : public System::Windows::Forms::UserControl
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

		RoutineItemListView(MySqlDataReader^ sqlRead)
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
		~RoutineItemListView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelItem;
	private: System::Windows::Forms::Label^ labelRoutineItemTeacherMobile;
	private: System::Windows::Forms::Label^ labelRoutineItemSemester;
	private: System::Windows::Forms::Label^ labelRoutineItemCourse;
	private: System::Windows::Forms::Label^ labelRoutineItemTeacherDesignation;
	private: System::Windows::Forms::Label^ labelRoutineItemTeacherName;
	private: System::Windows::Forms::Label^ labelRoutineItemTime;
	private: System::Windows::Forms::Label^ labelRoutineItemRoomNumber;
	private: System::Windows::Forms::Label^ labelRoutineItemLevel;
	private: System::Windows::Forms::Label^ labelRoutineItemSectionAndDepartment;
	private: System::Windows::Forms::Panel^ panelItemHoverColor;

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
			this->panelItem = (gcnew System::Windows::Forms::Panel());
			this->panelItemHoverColor = (gcnew System::Windows::Forms::Panel());
			this->labelRoutineItemTeacherMobile = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemSemester = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemCourse = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemTeacherDesignation = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemTeacherName = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemTime = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemRoomNumber = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemLevel = (gcnew System::Windows::Forms::Label());
			this->labelRoutineItemSectionAndDepartment = (gcnew System::Windows::Forms::Label());
			this->panelItem->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelItem
			// 
			this->panelItem->BackColor = System::Drawing::Color::Transparent;
			this->panelItem->Controls->Add(this->panelItemHoverColor);
			this->panelItem->Controls->Add(this->labelRoutineItemTeacherMobile);
			this->panelItem->Controls->Add(this->labelRoutineItemSemester);
			this->panelItem->Controls->Add(this->labelRoutineItemCourse);
			this->panelItem->Controls->Add(this->labelRoutineItemTeacherDesignation);
			this->panelItem->Controls->Add(this->labelRoutineItemTeacherName);
			this->panelItem->Controls->Add(this->labelRoutineItemTime);
			this->panelItem->Controls->Add(this->labelRoutineItemRoomNumber);
			this->panelItem->Controls->Add(this->labelRoutineItemLevel);
			this->panelItem->Controls->Add(this->labelRoutineItemSectionAndDepartment);
			this->panelItem->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelItem->Location = System::Drawing::Point(0, 0);
			this->panelItem->Name = L"panelItem";
			this->panelItem->Size = System::Drawing::Size(984, 161);
			this->panelItem->TabIndex = 0;
			this->panelItem->MouseHover += gcnew System::EventHandler(this, &RoutineItemListView::panelItemMouseHoverEvent);
			this->panelItem->MouseLeave += gcnew System::EventHandler(this, &RoutineItemListView::panelItemMouseLeaveEvent);

			// 
			// panelItemHoverColor
			// 
			this->panelItemHoverColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panelItemHoverColor->Location = System::Drawing::Point(0, 13);
			this->panelItemHoverColor->Name = L"panelItemHoverColor";
			this->panelItemHoverColor->Size = System::Drawing::Size(6, 133);
			this->panelItemHoverColor->TabIndex = 55;
			// 
			// labelRoutineItemTeacherMobile
			// 
			this->labelRoutineItemTeacherMobile->AutoSize = true;
			this->labelRoutineItemTeacherMobile->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRoutineItemTeacherMobile->Location = System::Drawing::Point(387, 118);
			this->labelRoutineItemTeacherMobile->Name = L"labelRoutineItemTeacherMobile";
			this->labelRoutineItemTeacherMobile->Size = System::Drawing::Size(128, 28);
			this->labelRoutineItemTeacherMobile->TabIndex = 54;
			
		
			// 
			// labelRoutineItemSemester
			// 
			this->labelRoutineItemSemester->AutoSize = true;
			this->labelRoutineItemSemester->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRoutineItemSemester->Location = System::Drawing::Point(27, 118);
			this->labelRoutineItemSemester->Name = L"labelRoutineItemSemester";
			this->labelRoutineItemSemester->Size = System::Drawing::Size(122, 28);
			this->labelRoutineItemSemester->TabIndex = 53;
		
			// 
			// labelRoutineItemCourse
			// 
			this->labelRoutineItemCourse->AutoSize = true;
			this->labelRoutineItemCourse->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoutineItemCourse->Location = System::Drawing::Point(387, 88);
			this->labelRoutineItemCourse->Name = L"labelRoutineItemCourse";
			this->labelRoutineItemCourse->Size = System::Drawing::Size(394, 27);
			this->labelRoutineItemCourse->TabIndex = 52;
			
			// 
			// labelRoutineItemTeacherDesignation
			// 
			this->labelRoutineItemTeacherDesignation->AutoSize = true;
			this->labelRoutineItemTeacherDesignation->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRoutineItemTeacherDesignation->Location = System::Drawing::Point(387, 49);
			this->labelRoutineItemTeacherDesignation->Name = L"labelRoutineItemTeacherDesignation";
			this->labelRoutineItemTeacherDesignation->Size = System::Drawing::Size(90, 28);
			this->labelRoutineItemTeacherDesignation->TabIndex = 51;
			
			// 
			// labelRoutineItemTeacherName
			// 
			this->labelRoutineItemTeacherName->AutoSize = true;
			this->labelRoutineItemTeacherName->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 18, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRoutineItemTeacherName->Location = System::Drawing::Point(384, 13);
			this->labelRoutineItemTeacherName->Name = L"labelRoutineItemTeacherName";
			this->labelRoutineItemTeacherName->Size = System::Drawing::Size(267, 41);
			this->labelRoutineItemTeacherName->TabIndex = 50;
			
			
			// 
			// labelRoutineItemTime
			// 
			this->labelRoutineItemTime->AutoSize = true;
			this->labelRoutineItemTime->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoutineItemTime->ForeColor = System::Drawing::Color::Green;
			this->labelRoutineItemTime->Location = System::Drawing::Point(26, 88);
			this->labelRoutineItemTime->Name = L"labelRoutineItemTime";
			this->labelRoutineItemTime->Size = System::Drawing::Size(197, 27);
			this->labelRoutineItemTime->TabIndex = 49;
		
			// 
			// labelRoutineItemRoomNumber
			// 
			this->labelRoutineItemRoomNumber->AutoSize = true;
			this->labelRoutineItemRoomNumber->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRoutineItemRoomNumber->Location = System::Drawing::Point(135, 49);
			this->labelRoutineItemRoomNumber->Name = L"labelRoutineItemRoomNumber";
			this->labelRoutineItemRoomNumber->Size = System::Drawing::Size(107, 28);
			this->labelRoutineItemRoomNumber->TabIndex = 48;
	
			// 
			// labelRoutineItemLevel
			// 
			this->labelRoutineItemLevel->AutoSize = true;
			this->labelRoutineItemLevel->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoutineItemLevel->Location = System::Drawing::Point(26, 49);
			this->labelRoutineItemLevel->Name = L"labelRoutineItemLevel";
			this->labelRoutineItemLevel->Size = System::Drawing::Size(90, 28);
			this->labelRoutineItemLevel->TabIndex = 47;
		
			// 
			// labelRoutineItemSectionAndDepartment
			// 
			this->labelRoutineItemSectionAndDepartment->AutoSize = true;
			this->labelRoutineItemSectionAndDepartment->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 18, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelRoutineItemSectionAndDepartment->Location = System::Drawing::Point(25, 13);
			this->labelRoutineItemSectionAndDepartment->Name = L"labelRoutineItemSectionAndDepartment";
			this->labelRoutineItemSectionAndDepartment->Size = System::Drawing::Size(134, 41);
			this->labelRoutineItemSectionAndDepartment->TabIndex = 46;
		
			// 
			// RoutineItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panelItem);
			this->Name = L"RoutineItem";
			this->Size = System::Drawing::Size(984, 161);
			this->panelItem->ResumeLayout(false);
			this->panelItem->PerformLayout();
			this->ResumeLayout(false);

		}

		void dataLoad() {
			this->labelRoutineItemTeacherMobile->Text = dataMobile;
			this->labelRoutineItemSemester->Text = dataSemester;
			this->labelRoutineItemCourse->Text = dataCourse;
			this->labelRoutineItemTeacherDesignation->Text = dataTeacherDesignation;
			this->labelRoutineItemTeacherName->Text = dataTeacherName;
			this->labelRoutineItemTime->Text = dataTime;
			this->labelRoutineItemRoomNumber->Text = L"Room: " + dataRoom;
			this->labelRoutineItemLevel->Text = L"Level: " + dataLevel;
			this->labelRoutineItemSectionAndDepartment->Text = dataSection + " - " + dataDepartment;
		}
#pragma endregion

	private: System::Void panelItemMouseHoverEvent(System::Object^ sender, System::EventArgs^ e) {
		this->panelItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
			static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
	}

	private: System::Void panelItemMouseLeaveEvent(System::Object^ sender, System::EventArgs^ e) {
		this->panelItem->BackColor = System::Drawing::Color::Transparent;
	}


	};
}
