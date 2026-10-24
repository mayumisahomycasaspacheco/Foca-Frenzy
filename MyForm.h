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
	private: System::Windows::Forms::Label^ label_vidas;
	private: System::Windows::Forms::Label^ label_record;





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
			this->label_vidas = (gcnew System::Windows::Forms::Label());
			this->label_record = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// boton_iniciar
			// 
			this->boton_iniciar->BackColor = System::Drawing::Color::Azure;
			this->boton_iniciar->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_iniciar->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->boton_iniciar->Location = System::Drawing::Point(313, 245);
			this->boton_iniciar->Name = L"boton_iniciar";
			this->boton_iniciar->Size = System::Drawing::Size(164, 38);
			this->boton_iniciar->TabIndex = 0;
			this->boton_iniciar->Text = L"Play!";
			this->boton_iniciar->UseVisualStyleBackColor = false;
			this->boton_iniciar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label_puntaje
			// 
			this->label_puntaje->AutoSize = true;
			this->label_puntaje->BackColor = System::Drawing::Color::Transparent;
			this->label_puntaje->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_puntaje->ForeColor = System::Drawing::SystemColors::Window;
			this->label_puntaje->Location = System::Drawing::Point(64, 7);
			this->label_puntaje->Name = L"label_puntaje";
			this->label_puntaje->Size = System::Drawing::Size(98, 23);
			this->label_puntaje->TabIndex = 1;
			this->label_puntaje->Text = L"Score: 0";
			this->label_puntaje->Click += gcnew System::EventHandler(this, &MyForm::label_puntaje_Click);
			// 
			// timer_peces
			// 
			this->timer_peces->Interval = 1000;
			this->timer_peces->Tick += gcnew System::EventHandler(this, &MyForm::timer_peces_tick);
			// 
			// imagenes_peces
			// 
			this->imagenes_peces->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imagenes_peces.ImageStream")));
			this->imagenes_peces->TransparentColor = System::Drawing::Color::Transparent;
			this->imagenes_peces->Images->SetKeyName(0, L"pez1.png");
			this->imagenes_peces->Images->SetKeyName(1, L"pez2.png");
			this->imagenes_peces->Images->SetKeyName(2, L"pez3.png");
			// 
			// label_vidas
			// 
			this->label_vidas->AutoSize = true;
			this->label_vidas->BackColor = System::Drawing::Color::Transparent;
			this->label_vidas->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_vidas->ForeColor = System::Drawing::SystemColors::Window;
			this->label_vidas->Location = System::Drawing::Point(361, 7);
			this->label_vidas->Name = L"label_vidas";
			this->label_vidas->Size = System::Drawing::Size(98, 23);
			this->label_vidas->TabIndex = 2;
			this->label_vidas->Text = L"Vidas: 3";
			this->label_vidas->Click += gcnew System::EventHandler(this, &MyForm::label_vidas_Click);
			// 
			// label_record
			// 
			this->label_record->AutoSize = true;
			this->label_record->BackColor = System::Drawing::Color::Transparent;
			this->label_record->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_record->ForeColor = System::Drawing::SystemColors::Window;
			this->label_record->Location = System::Drawing::Point(645, 7);
			this->label_record->Name = L"label_record";
			this->label_record->Size = System::Drawing::Size(109, 23);
			this->label_record->TabIndex = 3;
			this->label_record->Text = L"Record: 0";
			this->label_record->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->label_record);
			this->Controls->Add(this->label_vidas);
			this->Controls->Add(this->label_puntaje);
			this->Controls->Add(this->boton_iniciar);
			this->DoubleBuffered = true;
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
	private: int vidas = 3;
	private: int record = 0;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		boton_iniciar->Visible = false;

		Random^ r = gcnew Random(); //Crea un generador de numeros al azar y guardamos en r
		PictureBox^ pez = gcnew PictureBox();
		int tipo = r->Next(10);
		int imagen;
		int puntos;

		if (tipo == 0)
		{
			imagen = 2;
			puntos = 5;
		}

		else if (tipo <= 3)
		{
			imagen = 1;
			puntos = 3;
		}

		else
		{
			imagen = 0;
			puntos = 1;
		}

		pez->Image = imagenes_peces->Images[imagen];
		pez->Tag = puntos;

		pez->SizeMode = PictureBoxSizeMode::AutoSize;
		pez->BackColor = Color::Transparent;
		pez->Left = r->Next(this->ClientSize.Width - 64);
		pez->Top = 48 + r->Next(this->ClientSize.Height - 48 - 40);
		pez->Parent = this; //Pegamos en el formulario
		pez->Click += gcnew System::EventHandler(this, &MyForm::pez_click);
		
		System::Windows::Forms::Timer^ vida = gcnew System::Windows::Forms::Timer();
		
		int tiempo_vida = 4000 - (puntaje / 5) * 250;

		if (tiempo_vida < 1500)
		{
			tiempo_vida = 1500;
		}

		vida->Interval = tiempo_vida;

		vida->Tag = pez;
		vida->Tick += gcnew System::EventHandler(this, &MyForm::vida_tick);
		vida->Start();
		timer_peces->Start();
	}

	private: System::Void pez_click(System::Object^ sender, System::EventArgs^ e)
	{
		PictureBox^ pez = (PictureBox^)sender;
		puntaje += Convert::ToInt32(pez->Tag);
		delete pez; //Desaparece al pez

		int nuevo_intervalo = 1000 - (puntaje / 5) * 100;
		
		if (nuevo_intervalo < 300)
		{
			nuevo_intervalo = 300;
		}

		timer_peces->Interval = nuevo_intervalo;
		
		label_puntaje->Text = "Score: " + puntaje;
	}
	
	private: System::Void label_puntaje_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void timer_peces_tick(System::Object^ sender, System::EventArgs^ e)
	{
		Random^ r = gcnew Random();
		PictureBox^ pez = gcnew PictureBox();
		int tipo = r->Next(10);
		int imagen;
		int puntos;

		if (tipo == 0)
		{
			imagen = 2; //dorado
			puntos = 5;
		}

		else if (tipo <= 3)
		{
			imagen = 1; // azul
			puntos = 3;
		}

		else
		{
			imagen = 0; //naranja
			puntos = 1;
		}

		pez->Image = imagenes_peces->Images[imagen];
		pez->Tag = puntos;

		pez->SizeMode = PictureBoxSizeMode::AutoSize;
		pez->BackColor = Color::Transparent;
		pez->Left = r->Next(this->ClientSize.Width - 60);
		pez->Top = 48 + r->Next(this->ClientSize.Height - 48 - 40);
		pez->Parent = this;
		pez->Click += gcnew System::EventHandler(this, &MyForm::pez_click);
		System::Windows::Forms::Timer^ vida = gcnew System::Windows::Forms::Timer();
		
		int tiempo_vida = 4000 - (puntaje / 5) * 250;
		
		if (tiempo_vida < 1500)
		{
			tiempo_vida = 1500;
		}

		vida->Interval = tiempo_vida;

		vida->Tag = pez;
		vida->Tick += gcnew System::EventHandler(this, &MyForm::vida_tick);
		vida->Start();

		if (this->Controls->Count > 17)
		{
			terminar_juego();
		}
	}

	private: System::Void label_vidas_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void vida_tick(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::Timer^ t = (System::Windows::Forms::Timer^)sender;
		t->Stop();
		PictureBox^ pez = (PictureBox^)t->Tag;
		delete t;

		if (!pez->IsDisposed)
		{
			delete pez;
			vidas--;
			label_vidas->Text = "Vidas: " + vidas;

			if (vidas <= 0)
			{
				terminar_juego();
			}
		}
	}

	private: void terminar_juego()
	{
		timer_peces->Stop();
		int puntaje_final = puntaje;

		if (puntaje_final > record)
		{
			record = puntaje_final;
			label_record->Text = "Record: " + record;
		}

		puntaje = 0;
		vidas = 3;
		timer_peces->Interval = 1000;
		boton_iniciar->Visible = true;
		label_puntaje->Text = "Score: " + puntaje;
		label_vidas->Text = "Vidas: " + vidas;

		for (int i = this->Controls->Count - 1; i >= 0; i--)
		{
			if (this->Controls[i]->Tag != nullptr)
			{
				delete this->Controls[i];
			}
		}

		MessageBox::Show("You lost! Your score was: " + puntaje_final);

	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
};
}
