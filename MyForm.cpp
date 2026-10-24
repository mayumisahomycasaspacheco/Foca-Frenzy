#include "MyForm.h"
#include "FormInicio.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	bool seguir = true;
	while (seguir)
	{
		FocaFrenzy::FormInicio^ inicio = gcnew FocaFrenzy::FormInicio();
		
		if (inicio->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FocaFrenzy::MyForm^ juego = gcnew FocaFrenzy::MyForm();
			Application::Run(juego);
			seguir = juego->volver_al_menu;
		}

		else
		{
			seguir = false;
		}
	}
	
	return 0;
}