#pragma once

namespace FocaFrenzy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormGameOver
	/// </summary>
	public ref class FormGameOver : public System::Windows::Forms::Form
	{
	public:
		FormGameOver(void)
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
		~FormGameOver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_titulo;
	private: System::Windows::Forms::Label^ label_resultado;
	private: System::Windows::Forms::Button^ button_menu;
	private: System::Windows::Forms::Button^ boton_reintentar;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormGameOver::typeid));
			this->label_titulo = (gcnew System::Windows::Forms::Label());
			this->label_resultado = (gcnew System::Windows::Forms::Label());
			this->button_menu = (gcnew System::Windows::Forms::Button());
			this->boton_reintentar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_titulo
			// 
			this->label_titulo->AutoSize = true;
			this->label_titulo->BackColor = System::Drawing::Color::Transparent;
			this->label_titulo->Font = (gcnew System::Drawing::Font(L"Consolas", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_titulo->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label_titulo->Location = System::Drawing::Point(286, 123);
			this->label_titulo->Name = L"label_titulo";
			this->label_titulo->Size = System::Drawing::Size(238, 51);
			this->label_titulo->TabIndex = 1;
			this->label_titulo->Text = L"GAME OVER";
			this->label_titulo->Click += gcnew System::EventHandler(this, &FormGameOver::label_titulo_Click);
			// 
			// label_resultado
			// 
			this->label_resultado->AutoSize = true;
			this->label_resultado->BackColor = System::Drawing::Color::Transparent;
			this->label_resultado->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_resultado->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label_resultado->Location = System::Drawing::Point(234, 174);
			this->label_resultado->Name = L"label_resultado";
			this->label_resultado->Size = System::Drawing::Size(135, 33);
			this->label_resultado->TabIndex = 2;
			this->label_resultado->Text = L"Score: 0";
			this->label_resultado->Click += gcnew System::EventHandler(this, &FormGameOver::label_subtitulo_Click);
			// 
			// button_menu
			// 
			this->button_menu->BackColor = System::Drawing::Color::Orange;
			this->button_menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_menu->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_menu->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button_menu->Location = System::Drawing::Point(346, 332);
			this->button_menu->Name = L"button_menu";
			this->button_menu->Size = System::Drawing::Size(116, 38);
			this->button_menu->TabIndex = 5;
			this->button_menu->Text = L"Return";
			this->button_menu->UseVisualStyleBackColor = false;
			this->button_menu->Click += gcnew System::EventHandler(this, &FormGameOver::button_menu_Click);
			// 
			// boton_reintentar
			// 
			this->boton_reintentar->BackColor = System::Drawing::Color::Orange;
			this->boton_reintentar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->boton_reintentar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boton_reintentar->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_reintentar->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->boton_reintentar->Location = System::Drawing::Point(346, 283);
			this->boton_reintentar->Name = L"boton_reintentar";
			this->boton_reintentar->Size = System::Drawing::Size(116, 38);
			this->boton_reintentar->TabIndex = 6;
			this->boton_reintentar->Text = L"Play!";
			this->boton_reintentar->UseVisualStyleBackColor = false;
			this->boton_reintentar->Click += gcnew System::EventHandler(this, &FormGameOver::boton_reintentar_Click);
			// 
			// FormGameOver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->boton_reintentar);
			this->Controls->Add(this->button_menu);
			this->Controls->Add(this->label_resultado);
			this->Controls->Add(this->label_titulo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FormGameOver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormGameOver";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label_titulo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_subtitulo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void boton_reintentar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Retry;
	}

	private: System::Void button_menu_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	}

	public: void coloca_resultado(int puntaje, int record, bool nuevo_record)
	{
		String^ texto = "Score: " + puntaje + "\nRecord: " + record;

		if (nuevo_record)
		{
			texto = texto + "\ New Record!";
		}

		label_resultado->Text = texto;
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
