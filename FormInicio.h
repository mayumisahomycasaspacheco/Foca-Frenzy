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
			this->SuspendLayout();
			// 
			// label_titulo
			// 
			this->label_titulo->AutoSize = true;
			this->label_titulo->BackColor = System::Drawing::Color::Transparent;
			this->label_titulo->Font = (gcnew System::Drawing::Font(L"Consolas", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_titulo->Location = System::Drawing::Point(241, 57);
			this->label_titulo->Name = L"label_titulo";
			this->label_titulo->Size = System::Drawing::Size(286, 51);
			this->label_titulo->TabIndex = 0;
			this->label_titulo->Text = L"Foca Frenzy";
			// 
			// FormInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->label_titulo);
			this->DoubleBuffered = true;
			this->Name = L"FormInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormInicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
