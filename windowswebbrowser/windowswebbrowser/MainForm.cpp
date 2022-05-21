#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
//using namespace System::Windows::Forms::WebBrowser;

[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	windowswebbrowser::MainForm form;
	Application::Run(% form);
}
