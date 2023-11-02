#pragma once

namespace EngineeringCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button_dot;
	private: System::Windows::Forms::Button^ button_plus_minus;
	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_plus;





	private: System::Windows::Forms::Button^ button_multiply;

	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_remainder;
	private: System::Windows::Forms::Button^ button_power;
	private: System::Windows::Forms::Button^ button_null;
	private: System::Windows::Forms::Button^ button_escape;
	private: int first_num;
	private: char button = ' ';
	private: bool is_equal = false;







	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_plus_minus = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_remainder = (gcnew System::Windows::Forms::Button());
			this->button_power = (gcnew System::Windows::Forms::Button());
			this->button_null = (gcnew System::Windows::Forms::Button());
			this->button_escape = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label->Location = System::Drawing::Point(76, 9);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(387, 57);
			this->label->TabIndex = 3;
			this->label->Text = L"0";
			this->label->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label->Click += gcnew System::EventHandler(this, &Calculator::label_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightYellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightYellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(127, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightYellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(245, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightYellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 304);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightYellow;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(127, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightYellow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(245, 304);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightYellow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 421);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightYellow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(127, 421);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightYellow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(245, 421);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightYellow;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(12, 541);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 100);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::LightYellow;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->Location = System::Drawing::Point(127, 541);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(100, 100);
			this->button_dot->TabIndex = 11;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &Calculator::button_dot_Click);
			// 
			// button_plus_minus
			// 
			this->button_plus_minus->BackColor = System::Drawing::Color::LightYellow;
			this->button_plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus_minus->Location = System::Drawing::Point(245, 541);
			this->button_plus_minus->Name = L"button_plus_minus";
			this->button_plus_minus->Size = System::Drawing::Size(100, 100);
			this->button_plus_minus->TabIndex = 12;
			this->button_plus_minus->Text = L"+/-";
			this->button_plus_minus->UseVisualStyleBackColor = false;
			this->button_plus_minus->Click += gcnew System::EventHandler(this, &Calculator::button_plus_minus_CLick);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::Color::Orange;
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equal->Location = System::Drawing::Point(362, 541);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(100, 100);
			this->button_equal->TabIndex = 13;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &Calculator::button_equal_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Orange;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(362, 421);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(100, 100);
			this->button_plus->TabIndex = 14;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &Calculator::button_plus_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::Color::Orange;
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_multiply->Location = System::Drawing::Point(362, 304);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(100, 100);
			this->button_multiply->TabIndex = 15;
			this->button_multiply->Text = L"x";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &Calculator::button_multiply_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::Orange;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->Location = System::Drawing::Point(362, 188);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(100, 100);
			this->button_minus->TabIndex = 16;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &Calculator::button_minus_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::Orange;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->Location = System::Drawing::Point(362, 72);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(100, 100);
			this->button_divide->TabIndex = 17;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &Calculator::button_divide_Click);
			// 
			// button_remainder
			// 
			this->button_remainder->BackColor = System::Drawing::Color::Orange;
			this->button_remainder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_remainder->Location = System::Drawing::Point(245, 72);
			this->button_remainder->Name = L"button_remainder";
			this->button_remainder->Size = System::Drawing::Size(100, 100);
			this->button_remainder->TabIndex = 18;
			this->button_remainder->Text = L"%";
			this->button_remainder->UseVisualStyleBackColor = false;
			this->button_remainder->Click += gcnew System::EventHandler(this, &Calculator::button_remainder_Click);
			// 
			// button_power
			// 
			this->button_power->BackColor = System::Drawing::Color::Orange;
			this->button_power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_power->Location = System::Drawing::Point(127, 72);
			this->button_power->Name = L"button_power";
			this->button_power->Size = System::Drawing::Size(100, 100);
			this->button_power->TabIndex = 19;
			this->button_power->Text = L"^";
			this->button_power->UseVisualStyleBackColor = false;
			this->button_power->Click += gcnew System::EventHandler(this, &Calculator::button_power_Click);
			// 
			// button_null
			// 
			this->button_null->BackColor = System::Drawing::Color::Orange;
			this->button_null->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_null->Location = System::Drawing::Point(12, 72);
			this->button_null->Name = L"button_null";
			this->button_null->Size = System::Drawing::Size(100, 100);
			this->button_null->TabIndex = 20;
			this->button_null->Text = L"AC";
			this->button_null->UseVisualStyleBackColor = false;
			this->button_null->Click += gcnew System::EventHandler(this, &Calculator::button_null_Click);
			// 
			// button_escape
			// 
			this->button_escape->BackColor = System::Drawing::Color::Red;
			this->button_escape->Location = System::Drawing::Point(12, 9);
			this->button_escape->Name = L"button_escape";
			this->button_escape->Size = System::Drawing::Size(57, 57);
			this->button_escape->TabIndex = 21;
			this->button_escape->Text = L"ESC";
			this->button_escape->UseVisualStyleBackColor = false;
			this->button_escape->Click += gcnew System::EventHandler(this, &Calculator::button_escape_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(475, 653);
			this->Controls->Add(this->button_escape);
			this->Controls->Add(this->button_null);
			this->Controls->Add(this->button_power);
			this->Controls->Add(this->button_remainder);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_plus_minus);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->Click += gcnew System::EventHandler(this, &Calculator::buttonAll_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void math_button(const char button) {
		this->first_num = System::Convert::ToInt32(this->label->Text);
		this->button = button;
		this->label->Text = "0";
	}
	private: System::Void button_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->first_num = System::Convert::ToDouble(this->label->Text);
		this->first_num += 0.00;
		this->label->Text = System::Convert::ToString(this->first_num);
	}
	private: System::Void button_plus_minus_CLick(System::Object^ sender, System::EventArgs^ e) {
		this->first_num = System::Convert::ToInt32(this->label->Text);
		this->first_num = -1 * this->first_num;
		this->label->Text = System::Convert::ToString(this->first_num);
	}
	private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button == ' ')
			return;

		int second_num = System::Convert::ToInt32(this->label->Text);
		int res;
		switch(this->button) {
			case '+':
				res = this->first_num + second_num;
				break;
			case '-':
				res = this->first_num - second_num;
				break;
			case '*':
				res = this->first_num * second_num;
				break;
			case '/':
				if (second_num == 0) {
					res = 0;
					this->label->ForeColor = Color::Red;
					MessageBox::Show(this, "This is prohibited", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					res = this->first_num / second_num;
				}
				break;
			case '%':
				res = this->first_num % second_num;
				break;
			case '^':
				res = 1;
				for (int i = 0; i < second_num; i++) {
					res *= this->first_num;
				}
				break;
		}
		this->is_equal = true;
		this->label->Text = System::Convert::ToString(res);
	}
	private: System::Void button_plus_Click (System::Object^ sender, System::EventArgs^ e) {
		math_button('+');
	}
	private: System::Void button_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		math_button('*');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_button('-');
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_button('/');
	}
	private: System::Void button_remainder_Click(System::Object^ sender, System::EventArgs^ e) {
		math_button('%');
	}
	private: System::Void button_power_Click(System::Object^ sender, System::EventArgs^ e) {
		math_button('^');
	}
	private: System::Void button_null_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label->Text = "0";
	}
	private: System::Void label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonAll_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label->ForeColor = Color::Black;
		Button^ button = safe_cast<Button^>(sender);
		if (this->label->Text == "0" || is_equal) {
			this->label->Text = button->Text;
			is_equal = false;
		}
		else
			this->label->Text = this->label->Text + button->Text;
	}
	private: System::Void button_escape_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
		this->label->Text = "0";
	}
};
}
