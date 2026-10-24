#pragma once

namespace FocaFrenzy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormInicio
	/// </summary>
	public ref class FormInicio : public System::Windows::Forms::Form
	{
	public:
		FormInicio(void)
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
		~FormInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_titulo;
	private: System::Windows::Forms::Label^ label_subtitulo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_jugar;
	private: System::Windows::Forms::Button^ button_salir;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormInicio::typeid));
			this->label_titulo = (gcnew System::Windows::Forms::Label());
			this->label_subtitulo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_jugar = (gcnew System::Windows::Forms::Button());
			this->button_salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_titulo
			// 
			this->label_titulo->AutoSize = true;
			this->label_titulo->BackColor = System::Drawing::Color::Transparent;
			this->label_titulo->Font = (gcnew System::Drawing::Font(L"Consolas", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_titulo->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label_titulo->Location = System::Drawing::Point(242, 63);
			this->label_titulo->Name = L"label_titulo";
			this->label_titulo->Size = System::Drawing::Size(286, 51);
			this->label_titulo->TabIndex = 0;
			this->label_titulo->Text = L"Foca Frenzy";
			// 
			// label_subtitulo
			// 
			this->label_subtitulo->AutoSize = true;
			this->label_subtitulo->BackColor = System::Drawing::Color::Transparent;
			this->label_subtitulo->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_subtitulo->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label_subtitulo->Location = System::Drawing::Point(124, 119);
			this->label_subtitulo->Name = L"label_subtitulo";
			this->label_subtitulo->Size = System::Drawing::Size(525, 33);
			this->label_subtitulo->TabIndex = 1;
			this->label_subtitulo->Text = L"Catch the fish before they escape!";
			this->label_subtitulo->Click += gcnew System::EventHandler(this, &FormInicio::label1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::MidnightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(97, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(596, 180);
			this->label1->TabIndex = 2;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_jugar
			// 
			this->button_jugar->BackColor = System::Drawing::Color::Orange;
			this->button_jugar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_jugar->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_jugar->Location = System::Drawing::Point(97, 398);
			this->button_jugar->Name = L"button_jugar";
			this->button_jugar->Size = System::Drawing::Size(122, 40);
			this->button_jugar->TabIndex = 3;
			this->button_jugar->Text = L"Continue";
			this->button_jugar->UseVisualStyleBackColor = false;
			this->button_jugar->Click += gcnew System::EventHandler(this, &FormInicio::button_jugar_Click);
			// 
			// button_salir
			// 
			this->button_salir->BackColor = System::Drawing::Color::Orange;
			this->button_salir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_salir->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_salir->Location = System::Drawing::Point(618, 398);
			this->button_salir->Name = L"button_salir";
			this->button_salir->Size = System::Drawing::Size(75, 40);
			this->button_salir->TabIndex = 4;
			this->button_salir->Text = L"Exit";
			this->button_salir->UseVisualStyleBackColor = false;
			this->button_salir->Click += gcnew System::EventHandler(this, &FormInicio::button_salir_Click);
			// 
			// FormInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->button_salir);
			this->Controls->Add(this->button_jugar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_subtitulo);
			this->Controls->Add(this->label_titulo);
			this->DoubleBuffered = true;
			this->Name = L"FormInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormInicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_jugar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}

	private: System::Void button_salir_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}
};
}
