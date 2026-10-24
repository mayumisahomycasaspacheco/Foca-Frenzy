#include "MyForm.h"
#include "FormInicio.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FocaFrenzy::FormInicio^ inicio = gcnew FocaFrenzy::FormInicio();

	if (inicio->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Application::Run(gcnew FocaFrenzy::MyForm());
	}
	return 0;
}