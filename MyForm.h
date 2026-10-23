#pragma once

namespace FocaFrenzy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ boton_iniciar;
	
	private: System::Windows::Forms::Label^ label_puntaje;
	private: System::Windows::Forms::Timer^ timer_peces;
	private: System::Windows::Forms::ImageList^ imagenes_peces;



	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->boton_iniciar = (gcnew System::Windows::Forms::Button());
			this->label_puntaje = (gcnew System::Windows::Forms::Label());
			this->timer_peces = (gcnew System::Windows::Forms::Timer(this->components));
			this->imagenes_peces = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// boton_iniciar
			// 
			this->boton_iniciar->Location = System::Drawing::Point(339, 233);
			this->boton_iniciar->Name = L"boton_iniciar";
			this->boton_iniciar->Size = System::Drawing::Size(75, 23);
			this->boton_iniciar->TabIndex = 0;
			this->boton_iniciar->Text = L"Play!";
			this->boton_iniciar->UseVisualStyleBackColor = true;
			this->boton_iniciar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label_puntaje
			// 
			this->label_puntaje->AutoSize = true;
			this->label_puntaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_puntaje->Location = System::Drawing::Point(12, 9);
			this->label_puntaje->Name = L"label_puntaje";
			this->label_puntaje->Size = System::Drawing::Size(119, 32);
			this->label_puntaje->TabIndex = 1;
			this->label_puntaje->Text = L"Score: 0";
			this->label_puntaje->Click += gcnew System::EventHandler(this, &MyForm::label_puntaje_Click);
			// 
			// timer_peces
			// 
			this->timer_peces->Interval = 1000;
			this->timer_peces->Tick += gcnew System::EventHandler(this, &MyForm::timer_peces_Tick);
			// 
			// imagenes_peces
			// 
			this->imagenes_peces->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imagenes_peces.ImageStream")));
			this->imagenes_peces->TransparentColor = System::Drawing::Color::Transparent;
			this->imagenes_peces->Images->SetKeyName(0, L"pez1.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->label_puntaje);
			this->Controls->Add(this->boton_iniciar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Foca Frenzy";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: int puntaje = 0;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		Random^ r = gcnew Random(); //Crea un generador de numeros al azar y guardamos en r
		PictureBox^ pez = gcnew PictureBox();
		pez->Image = imagenes_peces->Images[0];
		pez->SizeMode = PictureBoxSizeMode::AutoSize;
		pez->BackColor = Color::Transparent;
		pez->Left = r->Next(this->ClientSize.Width - 60);
		pez->Top = r->Next(this->ClientSize.Height - 60);
		pez->Tag = "Pez";
		pez->Parent = this; //Pegamos en el formulario
		pez->Click += gcnew System::EventHandler(this, &MyForm::pez_Click);
		timer_peces->Start();
	}

	private: System::Void pez_Click(System::Object^ sender, System::EventArgs^ e)
	{
		PictureBox^ pez = (PictureBox^)sender;
		delete pez; //Desaparece al pez
		puntaje++;

		if (puntaje % 5 == 0 && timer_peces->Interval > 300)
		{
			timer_peces->Interval -= 100;
		}

		label_puntaje->Text = "Score: " + puntaje;
	}
	
	private: System::Void label_puntaje_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void timer_peces_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		Random^ r = gcnew Random();
		PictureBox^ pez = gcnew PictureBox();
		pez->Image = imagenes_peces->Images[0];
		pez->SizeMode = PictureBoxSizeMode::AutoSize;
		pez->BackColor = Color::Transparent;
		pez->Left = r->Next(this->ClientSize.Width - 60);
		pez->Top = r->Next(this->ClientSize.Height - 60);
		pez->Tag = "Pez";
		pez->Parent = this;
		pez->Click += gcnew System::EventHandler(this, &MyForm::pez_Click);

		timer_peces->Interval = 500;

		if (this->Controls->Count > 5)
		{
			timer_peces->Stop(); //Aqui se van a detener los peces
			MessageBox::Show("You lost! Your score was: " + puntaje);
			
			puntaje = 0; //Reinicia el puntaje
			
			label_puntaje->Text = "Score: " + puntaje; //Actualiza lo que se ve

			for (int i = this->Controls->Count - 1; i >= 0; i--)
			{
				if (this->Controls[i]->Tag != nullptr && this->Controls[i]->Tag->ToString() == "Pez")
				{
					delete this->Controls[i];
				}
			}


		}
	}
};
}
