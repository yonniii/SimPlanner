#include "WritePlan.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Sub(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::WritePlan form;
	Application::Run(%form);
}