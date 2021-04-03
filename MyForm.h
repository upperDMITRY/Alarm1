#pragma once


namespace Alarm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ buttonStart1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ buttonStart2;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ buttonStart3;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::Button^ buttonStop1;
	private: System::Windows::Forms::Button^ buttonStop2;
	private: System::Windows::Forms::Button^ buttonStop3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;








	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonStop1 = (gcnew System::Windows::Forms::Button());
			this->buttonStart1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->buttonStop2 = (gcnew System::Windows::Forms::Button());
			this->buttonStart2 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->buttonStop3 = (gcnew System::Windows::Forms::Button());
			this->buttonStart3 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->panel1->Controls->Add(this->buttonStop1);
			this->panel1->Controls->Add(this->buttonStart1);
			this->panel1->Controls->Add(this->maskedTextBox1);
			this->panel1->Location = System::Drawing::Point(0, 77);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(460, 95);
			this->panel1->TabIndex = 0;
			// 
			// buttonStop1
			// 
			this->buttonStop1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonStop1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonStop1->FlatAppearance->BorderSize = 0;
			this->buttonStop1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStop1->Location = System::Drawing::Point(341, 46);
			this->buttonStop1->Name = L"buttonStop1";
			this->buttonStop1->Size = System::Drawing::Size(106, 28);
			this->buttonStop1->TabIndex = 2;
			this->buttonStop1->Text = L"Остановить";
			this->buttonStop1->UseVisualStyleBackColor = false;
			this->buttonStop1->Click += gcnew System::EventHandler(this, &MyForm::buttonStop1_Click);
			// 
			// buttonStart1
			// 
			this->buttonStart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonStart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonStart1->FlatAppearance->BorderSize = 0;
			this->buttonStart1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart1->Location = System::Drawing::Point(341, 20);
			this->buttonStart1->Name = L"buttonStart1";
			this->buttonStart1->Size = System::Drawing::Size(106, 28);
			this->buttonStart1->TabIndex = 1;
			this->buttonStart1->Text = L"Установить";
			this->buttonStart1->UseVisualStyleBackColor = false;
			this->buttonStart1->Click += gcnew System::EventHandler(this, &MyForm::buttonStart1_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->maskedTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.03077F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->maskedTextBox1->Location = System::Drawing::Point(12, 20);
			this->maskedTextBox1->Mask = L"00:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(120, 54);
			this->maskedTextBox1->TabIndex = 0;
			this->maskedTextBox1->Text = L"0000";
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox1_MaskInputRejected);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 16.06154F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(68, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Установка будильника";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->panel2->Controls->Add(this->buttonStop2);
			this->panel2->Controls->Add(this->buttonStart2);
			this->panel2->Controls->Add(this->maskedTextBox2);
			this->panel2->Location = System::Drawing::Point(0, 194);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(460, 96);
			this->panel2->TabIndex = 2;
			// 
			// buttonStop2
			// 
			this->buttonStop2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonStop2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonStop2->FlatAppearance->BorderSize = 0;
			this->buttonStop2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStop2->Location = System::Drawing::Point(341, 46);
			this->buttonStop2->Name = L"buttonStop2";
			this->buttonStop2->Size = System::Drawing::Size(106, 28);
			this->buttonStop2->TabIndex = 3;
			this->buttonStop2->Text = L"Остановить";
			this->buttonStop2->UseVisualStyleBackColor = false;
			this->buttonStop2->Click += gcnew System::EventHandler(this, &MyForm::buttonStop2_Click);
			// 
			// buttonStart2
			// 
			this->buttonStart2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonStart2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonStart2->FlatAppearance->BorderSize = 0;
			this->buttonStart2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart2->Location = System::Drawing::Point(341, 20);
			this->buttonStart2->Name = L"buttonStart2";
			this->buttonStart2->Size = System::Drawing::Size(106, 28);
			this->buttonStart2->TabIndex = 1;
			this->buttonStart2->Text = L"Установить";
			this->buttonStart2->UseVisualStyleBackColor = false;
			this->buttonStart2->Click += gcnew System::EventHandler(this, &MyForm::buttonStart2_Click);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->maskedTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.03077F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->maskedTextBox2->Location = System::Drawing::Point(12, 20);
			this->maskedTextBox2->Mask = L"00:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(120, 54);
			this->maskedTextBox2->TabIndex = 0;
			this->maskedTextBox2->Text = L"0000";
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->panel3->Controls->Add(this->buttonStop3);
			this->panel3->Controls->Add(this->buttonStart3);
			this->panel3->Controls->Add(this->maskedTextBox3);
			this->panel3->Location = System::Drawing::Point(0, 312);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(460, 97);
			this->panel3->TabIndex = 2;
			// 
			// buttonStop3
			// 
			this->buttonStop3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonStop3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonStop3->FlatAppearance->BorderSize = 0;
			this->buttonStop3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStop3->Location = System::Drawing::Point(341, 46);
			this->buttonStop3->Name = L"buttonStop3";
			this->buttonStop3->Size = System::Drawing::Size(106, 28);
			this->buttonStop3->TabIndex = 4;
			this->buttonStop3->Text = L"Остановить";
			this->buttonStop3->UseVisualStyleBackColor = false;
			this->buttonStop3->Click += gcnew System::EventHandler(this, &MyForm::buttonStop3_Click);
			// 
			// buttonStart3
			// 
			this->buttonStart3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->buttonStart3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->buttonStart3->FlatAppearance->BorderSize = 0;
			this->buttonStart3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart3->Location = System::Drawing::Point(341, 20);
			this->buttonStart3->Name = L"buttonStart3";
			this->buttonStart3->Size = System::Drawing::Size(106, 28);
			this->buttonStart3->TabIndex = 1;
			this->buttonStart3->Text = L"Установить";
			this->buttonStart3->UseVisualStyleBackColor = false;
			this->buttonStart3->Click += gcnew System::EventHandler(this, &MyForm::buttonStart3_Click);
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->maskedTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.03077F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->maskedTextBox3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->maskedTextBox3->Location = System::Drawing::Point(12, 20);
			this->maskedTextBox3->Mask = L"00:00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(120, 54);
			this->maskedTextBox3->TabIndex = 0;
			this->maskedTextBox3->Text = L"0000";
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(188, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 3;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->ClientSize = System::Drawing::Size(459, 442);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Будильник";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		String^ alarmTime1;
		String^ alarmTime2;
		String^ alarmTime3;
		SoundPlayer^ sp = gcnew SoundPlayer("D:\\Projects_C\\2-nd\\2-nd\\Alarm\\sound\\sound.wav");
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		buttonStop1->Enabled = false;
		buttonStop2->Enabled = false;
		buttonStop3->Enabled = false;

		timer1->Interval = 1000;
		this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
		timer1->Start();
	}
	
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		label2->Text = DateTime::Now.Hour.ToString("00") + ":" +
			DateTime::Now.Minute.ToString("00") + ":" + DateTime::Now.Second.ToString("00");

		if ((alarmTime1 + (":00")) == label2->Text)
		{
			sp->Play();
			buttonStart1->Enabled = true;
			buttonStop1->Enabled = false;
			maskedTextBox1->Enabled = true;
		}

		else if ((alarmTime2 + (":00")) == label2->Text)
		{
			sp->Play();
			buttonStart2->Enabled = true;
			buttonStop2->Enabled = false;
			maskedTextBox2->Enabled = true;
		}

		else if ((alarmTime3 + (":00")) == label2->Text)
		{
			sp->Play();
			buttonStart3->Enabled = true;
			buttonStop3->Enabled = false;
			maskedTextBox3->Enabled = true;
		}
	}

	private: System::Void buttonStart1_Click(System::Object^ sender, System::EventArgs^ e) {
		alarmTime1 = maskedTextBox1->Text;

		buttonStart1->Enabled = false;
		buttonStop1->Enabled = true;

		maskedTextBox1->Enabled = false;
	}

	private: System::Void buttonStop1_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonStart1->Enabled = true;
		buttonStop1->Enabled = false;
		maskedTextBox1->Enabled = true;
	}


	private: System::Void buttonStart2_Click(System::Object^ sender, System::EventArgs^ e) {
		alarmTime2 = maskedTextBox2->Text;

		buttonStart2->Enabled = false;
		buttonStop2->Enabled = true;

		maskedTextBox2->Enabled = false;
	}
private: System::Void buttonStop2_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonStart2->Enabled = true;
	buttonStop2->Enabled = false;
	maskedTextBox2->Enabled = true;
}
private: System::Void buttonStart3_Click(System::Object^ sender, System::EventArgs^ e) {
	alarmTime3 = maskedTextBox3->Text;

	buttonStart3->Enabled = false;
	buttonStop3->Enabled = true;

	maskedTextBox3->Enabled = false;
}
private: System::Void buttonStop3_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonStart3->Enabled = true;
	buttonStop3->Enabled = false;
	maskedTextBox3->Enabled = true;
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {

}
};
}
