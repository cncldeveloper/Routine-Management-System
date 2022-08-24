#pragma once
#include "Config.h"
#include "MyForm.h"
namespace RoutineManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	private:
		MySqlConnection^ sqlConnection = gcnew MySqlConnection();
		MySqlCommand^ sqlCommand = gcnew MySqlCommand();
		MySqlDataReader^ sqlRead;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}

			sqlConnection->Close();
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonClose;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ windowBar;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBoxUsername;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBoxPassword;

	private: System::Windows::Forms::Label^ labelLoginMessage;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->windowBar = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelLoginMessage = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->panel1->Controls->Add(this->windowBar);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(323, 557);
			this->panel1->TabIndex = 0;
			// 
			// windowBar
			// 
			this->windowBar->BackColor = System::Drawing::Color::Transparent;
			this->windowBar->Location = System::Drawing::Point(3, 2);
			this->windowBar->Name = L"windowBar";
			this->windowBar->Size = System::Drawing::Size(980, 36);
			this->windowBar->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(81, 473);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 48);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Developed By\r\nNUBTK Developer Team";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(30, 247);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 99);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome to NUBTK\r\nRoutine Management\r\nSystem\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(94, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 118);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(450, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 28);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(450, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(699, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Transparent;
			this->buttonClose->FlatAppearance->BorderSize = 0;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonClose->Location = System::Drawing::Point(925, 0);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(58, 38);
			this->buttonClose->TabIndex = 6;
			this->buttonClose->Text = L"X";
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Login::buttonClose_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(449, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(313, 39);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Login to your account!";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label6->Location = System::Drawing::Point(512, 354);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 24);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Forgot Password";
			this->label6->Click += gcnew System::EventHandler(this, &Login::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label7->Location = System::Drawing::Point(451, 461);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(444, 60);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Support\r\nIn publishing and graphic design, Lorem ipsum is a placeholder \r\ntext co"
				L"mmonly used to demonstrate.the visualform of a document.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->textBoxUsername);
			this->panel2->Location = System::Drawing::Point(456, 201);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(382, 46);
			this->panel2->TabIndex = 10;
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->Location = System::Drawing::Point(15, 7);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(352, 33);
			this->textBoxUsername->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->textBoxPassword);
			this->panel3->Location = System::Drawing::Point(456, 278);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(382, 46);
			this->panel3->TabIndex = 11;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(15, 7);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(352, 33);
			this->textBoxPassword->TabIndex = 5;
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// labelLoginMessage
			// 
			this->labelLoginMessage->AutoSize = true;
			this->labelLoginMessage->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLoginMessage->ForeColor = System::Drawing::Color::Red;
			this->labelLoginMessage->Location = System::Drawing::Point(452, 141);
			this->labelLoginMessage->Name = L"labelLoginMessage";
			this->labelLoginMessage->Size = System::Drawing::Size(0, 20);
			this->labelLoginMessage->TabIndex = 12;
			this->labelLoginMessage->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(984, 557);
			this->Controls->Add(this->labelLoginMessage);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::windowBarMouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::windowBarMouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::windowBarMouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		if (textBoxUsername->Text == "" || textBoxPassword->Text == "") {
			labelLoginMessage->Text = "Email and password is required";
		}
		else {

			sqlConnection->ConnectionString = Config::getConnectionString();
			sqlConnection->Open();
			sqlCommand->Connection = sqlConnection;

			sqlCommand->CommandText = "select * from users WHERE email=@email AND password=@password AND status=1";
			sqlCommand->Parameters->AddWithValue("email", textBoxUsername->Text);
			sqlCommand->Parameters->AddWithValue("password", textBoxPassword->Text);

			sqlRead = sqlCommand->ExecuteReader();
			sqlCommand->Parameters->Clear();

			bool login = false;

			while (sqlRead->Read()) {
				login = true;
			}

			if (login == true) {
				MyForm^ form = gcnew MyForm;
				form->Show();

				this->Hide();
			}
			else {
				labelLoginMessage->Text = "Invalid your email or password.";
			}

			sqlRead->Close();
			sqlConnection->Close();
		}

	}
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private:
		int mouseX = 0, mouseY = 0;
		bool mouseDown;

	private: System::Void windowBarMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mouseDown = true;
	}
	private: System::Void windowBarMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (mouseDown) {
			mouseX = MousePosition.X - 400;
			mouseY = MousePosition.Y - 20;

			this->SetDesktopLocation(mouseX, mouseY);
		}
	}
	private: System::Void windowBarMouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mouseDown = false;
		mouseX = 0;
		mouseY = 0;
	}




	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
