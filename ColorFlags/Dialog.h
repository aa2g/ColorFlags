#pragma once
#include "RGBATuple.h"

namespace ColorFlags {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			colorTuple.fromITuple(0, 0, 0, 255);
			updated = true;
			updateInts();
			updateFloats();
			updatePreviews();
			updateFlags();
			updated = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;




	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  floatAlpha;

	private: System::Windows::Forms::NumericUpDown^  floatBlue;

	private: System::Windows::Forms::NumericUpDown^  floatGreen;

	private: System::Windows::Forms::NumericUpDown^  floatRed;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  intAlpha;

	private: System::Windows::Forms::NumericUpDown^  intBlue;

	private: System::Windows::Forms::NumericUpDown^  intGreen;

	private: System::Windows::Forms::NumericUpDown^  intRed;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Panel^  panelAlphaPreview;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Panel^  panelColorPreview;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textFlags;
	private: System::Windows::Forms::TextBox^  textPhotoshop;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textPhotoshop = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->panelAlphaPreview = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panelColorPreview = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textFlags = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->floatAlpha = (gcnew System::Windows::Forms::NumericUpDown());
			this->floatBlue = (gcnew System::Windows::Forms::NumericUpDown());
			this->floatGreen = (gcnew System::Windows::Forms::NumericUpDown());
			this->floatRed = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->intAlpha = (gcnew System::Windows::Forms::NumericUpDown());
			this->intBlue = (gcnew System::Windows::Forms::NumericUpDown());
			this->intGreen = (gcnew System::Windows::Forms::NumericUpDown());
			this->intRed = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatAlpha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatRed))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intAlpha))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intBlue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intRed))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textPhotoshop);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textFlags);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(303, 299);
			this->panel1->TabIndex = 0;
			// 
			// textPhotoshop
			// 
			this->textPhotoshop->Location = System::Drawing::Point(32, 264);
			this->textPhotoshop->MaxLength = 6;
			this->textPhotoshop->Name = L"textPhotoshop";
			this->textPhotoshop->Size = System::Drawing::Size(84, 20);
			this->textPhotoshop->TabIndex = 12;
			this->textPhotoshop->TextChanged += gcnew System::EventHandler(this, &MyForm::updateFromPhotoshop);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Photoshop HEX";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->panelAlphaPreview);
			this->groupBox5->Location = System::Drawing::Point(154, 148);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(100, 52);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Alpha Preview";
			// 
			// panelAlphaPreview
			// 
			this->panelAlphaPreview->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelAlphaPreview->Location = System::Drawing::Point(3, 16);
			this->panelAlphaPreview->Name = L"panelAlphaPreview";
			this->panelAlphaPreview->Size = System::Drawing::Size(94, 33);
			this->panelAlphaPreview->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->panelColorPreview);
			this->groupBox4->Location = System::Drawing::Point(48, 148);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(100, 52);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Color Preview";
			// 
			// panelColorPreview
			// 
			this->panelColorPreview->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelColorPreview->Location = System::Drawing::Point(3, 16);
			this->panelColorPreview->Name = L"panelColorPreview";
			this->panelColorPreview->Size = System::Drawing::Size(94, 33);
			this->panelColorPreview->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"HEX Flags:";
			// 
			// textFlags
			// 
			this->textFlags->Location = System::Drawing::Point(15, 220);
			this->textFlags->Name = L"textFlags";
			this->textFlags->Size = System::Drawing::Size(278, 20);
			this->textFlags->TabIndex = 6;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->floatAlpha);
			this->groupBox2->Controls->Add(this->floatBlue);
			this->groupBox2->Controls->Add(this->floatGreen);
			this->groupBox2->Controls->Add(this->floatRed);
			this->groupBox2->Location = System::Drawing::Point(154, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(139, 130);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Float";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Alpha";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Blue";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Red";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Green";
			// 
			// floatAlpha
			// 
			this->floatAlpha->DecimalPlaces = 10;
			this->floatAlpha->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->floatAlpha->Location = System::Drawing::Point(63, 100);
			this->floatAlpha->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->floatAlpha->Name = L"floatAlpha";
			this->floatAlpha->Size = System::Drawing::Size(63, 20);
			this->floatAlpha->TabIndex = 9;
			this->floatAlpha->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromFloat);
			// 
			// floatBlue
			// 
			this->floatBlue->DecimalPlaces = 10;
			this->floatBlue->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->floatBlue->Location = System::Drawing::Point(63, 73);
			this->floatBlue->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->floatBlue->Name = L"floatBlue";
			this->floatBlue->Size = System::Drawing::Size(63, 20);
			this->floatBlue->TabIndex = 8;
			this->floatBlue->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromFloat);
			// 
			// floatGreen
			// 
			this->floatGreen->DecimalPlaces = 10;
			this->floatGreen->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->floatGreen->Location = System::Drawing::Point(63, 46);
			this->floatGreen->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->floatGreen->Name = L"floatGreen";
			this->floatGreen->Size = System::Drawing::Size(63, 20);
			this->floatGreen->TabIndex = 7;
			this->floatGreen->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromFloat);
			// 
			// floatRed
			// 
			this->floatRed->DecimalPlaces = 10;
			this->floatRed->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->floatRed->Location = System::Drawing::Point(63, 19);
			this->floatRed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->floatRed->Name = L"floatRed";
			this->floatRed->Size = System::Drawing::Size(63, 20);
			this->floatRed->TabIndex = 6;
			this->floatRed->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromFloat);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->intAlpha);
			this->groupBox1->Controls->Add(this->intBlue);
			this->groupBox1->Controls->Add(this->intGreen);
			this->groupBox1->Controls->Add(this->intRed);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 130);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Integer";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Alpha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Blue";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Red";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Green";
			// 
			// intAlpha
			// 
			this->intAlpha->Location = System::Drawing::Point(61, 100);
			this->intAlpha->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->intAlpha->Name = L"intAlpha";
			this->intAlpha->Size = System::Drawing::Size(63, 20);
			this->intAlpha->TabIndex = 3;
			this->intAlpha->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromInteger);
			// 
			// intBlue
			// 
			this->intBlue->Location = System::Drawing::Point(61, 73);
			this->intBlue->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->intBlue->Name = L"intBlue";
			this->intBlue->Size = System::Drawing::Size(63, 20);
			this->intBlue->TabIndex = 2;
			this->intBlue->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromInteger);
			// 
			// intGreen
			// 
			this->intGreen->Location = System::Drawing::Point(61, 46);
			this->intGreen->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->intGreen->Name = L"intGreen";
			this->intGreen->Size = System::Drawing::Size(63, 20);
			this->intGreen->TabIndex = 1;
			this->intGreen->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromInteger);
			// 
			// intRed
			// 
			this->intRed->Location = System::Drawing::Point(61, 19);
			this->intRed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->intRed->Name = L"intRed";
			this->intRed->Size = System::Drawing::Size(63, 20);
			this->intRed->TabIndex = 0;
			this->intRed->ValueChanged += gcnew System::EventHandler(this, &MyForm::updateFromInteger);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 267);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"#";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label12->Location = System::Drawing::Point(132, 264);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(168, 20);
			this->label12->TabIndex = 14;
			this->label12->Text = L"by Anon";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 299);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"AA2 Color Flags";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatAlpha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatRed))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intAlpha))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intBlue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intRed))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: RGBATuple colorTuple;
	private: bool updated;
	private: System::Void updateFloats() {
		floatRed->Value = System::Decimal(colorTuple.fRed);
		floatGreen->Value = System::Decimal(colorTuple.fGreen);
		floatBlue->Value = System::Decimal(colorTuple.fBlue);
		floatAlpha->Value = System::Decimal(colorTuple.fAlpha);
		updateFlags();
	}
	private: System::Void updateInts() {
		intRed->Value = System::Decimal(colorTuple.iRed());
		intGreen->Value = System::Decimal(colorTuple.iGreen());
		intBlue->Value = System::Decimal(colorTuple.iBlue());
		intAlpha->Value = System::Decimal(colorTuple.iAlpha());
	}
	private: System::Void updatePreviews() {
		panelColorPreview->BackColor = System::Drawing::Color::FromArgb(255, colorTuple.iRed(), colorTuple.iGreen(), colorTuple.iBlue());
		panelAlphaPreview->BackColor = System::Drawing::Color::FromArgb(colorTuple.iAlpha(), colorTuple.iRed(), colorTuple.iGreen(), colorTuple.iBlue());
	}
	private: System::Void updateFlags() {
		array<unsigned char> ^red = BitConverter::GetBytes(colorTuple.fRed);
		array<unsigned char> ^green = BitConverter::GetBytes(colorTuple.fGreen);
		array<unsigned char> ^blue = BitConverter::GetBytes(colorTuple.fBlue);
		array<unsigned char> ^alpha = BitConverter::GetBytes(colorTuple.fAlpha);
		textFlags->Text = BitConverter::ToString(red) + " " + BitConverter::ToString(green) + " " + BitConverter::ToString(blue) + " " + BitConverter::ToString(alpha);
	}
	private: System::Void updatePhotoshop() {
		textPhotoshop->Text = String::Format("{0:X2}{1:X2}{2:X2}", colorTuple.iRed(), colorTuple.iGreen(), colorTuple.iBlue());
	}
	private: System::Void updateFromInteger(System::Object^  sender, System::EventArgs^  e) {
		if (updated) return;
		updated = true;
		colorTuple.fromITuple(System::Decimal::ToInt32(intRed->Value), System::Decimal::ToInt32(intGreen->Value), System::Decimal::ToInt32(intBlue->Value), System::Decimal::ToInt32(intAlpha->Value));
		updateFloats();
		updatePreviews();
		updateFlags();
		updatePhotoshop();
		updated = false;
	}
	private: System::Void updateFromFloat(System::Object^  sender, System::EventArgs^  e) {
		if (updated) return;
		updated = true;
		colorTuple.fromFTuple(System::Decimal::ToSingle(floatRed->Value), System::Decimal::ToSingle(floatGreen->Value), System::Decimal::ToSingle(floatBlue->Value), System::Decimal::ToSingle(floatAlpha->Value));
		updateInts();
		updatePreviews();
		updateFlags();
		updatePhotoshop();
		updated = false;
	}
	private: System::Void updateFromPhotoshop(System::Object^  sender, System::EventArgs^  e) {
		if (updated) return;
		if (textPhotoshop->Text->Length != 6) return;
		updated = true;
		try {
			int red = Int32::Parse(textPhotoshop->Text->Substring(0, 2), System::Globalization::NumberStyles::HexNumber);
			int green = Int32::Parse(textPhotoshop->Text->Substring(2, 2), System::Globalization::NumberStyles::HexNumber);
			int blue = Int32::Parse(textPhotoshop->Text->Substring(4, 2), System::Globalization::NumberStyles::HexNumber);
			colorTuple.fromITuple(red, green, blue, colorTuple.iAlpha());
			updateInts();
			updateFloats();
			updatePreviews();
			updateFlags();
		}
		catch (System::FormatException ^) {
		}
		updated = false;
	}
};
}
