#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
int flipcoin();
[STAThreadAttribute]
int main(array <String^>^ args) {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CoinTossApplication::MyForm form;
	Application::Run(%form);
	return 0;
}