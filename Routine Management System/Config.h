#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class Config
{
private:
	static String^ datasource = "localhost";
	static String^ port = "3306";
	static String^ username = "root";
	static String^ password = "chanchal";
	static String^ database = "nubtk;";

	static MySqlConnection^ sqlConnection = gcnew MySqlConnection();
	static MySqlCommand^ sqlCommand = gcnew MySqlCommand();
	static MySqlDataReader^ sqlRead;

	static array<String^>^ settingsData = gcnew array<String^>(20);

public:


	static String^ getConnectionString() {
		return "datasource=" + datasource + "; port = " + port + "; username = " + username + "; password = " + password + "; database = " + database;
	}


	public: 
		static String^ getSettings(int id) {
			
			String^ data;


			sqlConnection->ConnectionString = Config::getConnectionString();
			sqlConnection->Open();
			sqlCommand->Connection = sqlConnection;

			sqlCommand->CommandText = "SELECT * FROM settings WHERE id=" + id;
			sqlRead = sqlCommand->ExecuteReader();
			
			while (sqlRead->Read()) {
				data = sqlRead["setting_value"]->ToString();
	
			}

			sqlRead->Close();
			sqlConnection->Close();

			return data;		
	}

};
//datasource=localhost; port=3306; username=root; password=chanchal; database=nubtk
