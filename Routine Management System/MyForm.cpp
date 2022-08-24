#include "Login.h"
#include "Settings.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	RoutineManagementSystem::Login frm;

	//RoutineManagementSystem::Settings frm;
	frm.Show();

	Application::Run();

	return 0;
}
