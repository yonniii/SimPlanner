#pragma once
#include <iostream>
#include <string>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Text;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// WritePlan에 대한 요약입니다.
	/// </summary>
	public ref class WritePlan : public System::Windows::Forms::Form
	{
	public:
		WritePlan(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~WritePlan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Detail;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DateTimePicker^  Start;
	private: System::Windows::Forms::DateTimePicker^  End;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Title;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DateTimePicker^  StartTime;
	private: System::Windows::Forms::DateTimePicker^  EndTime;
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Detail = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Start = (gcnew System::Windows::Forms::DateTimePicker());
			this->End = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StartTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->EndTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Detail
			// 
			this->Detail->Location = System::Drawing::Point(141, 224);
			this->Detail->Multiline = true;
			this->Detail->Name = L"Detail";
			this->Detail->Size = System::Drawing::Size(309, 179);
			this->Detail->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(492, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"확인";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &WritePlan::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(620, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"취소";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &WritePlan::button2_Click);
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(141, 38);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(200, 25);
			this->Start->TabIndex = 2;
			// 
			// End
			// 
			this->End->Location = System::Drawing::Point(141, 92);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(200, 25);
			this->End->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(43, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"시작";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(43, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"종료";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(43, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"제목";
			// 
			// Title
			// 
			this->Title->Location = System::Drawing::Point(141, 142);
			this->Title->Multiline = true;
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(309, 60);
			this->Title->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(43, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"내용";
			// 
			// StartTime
			// 
			this->StartTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->StartTime->Location = System::Drawing::Point(379, 37);
			this->StartTime->Name = L"StartTime";
			this->StartTime->ShowUpDown = true;
			this->StartTime->Size = System::Drawing::Size(200, 25);
			this->StartTime->TabIndex = 5;
			// 
			// EndTime
			// 
			this->EndTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->EndTime->Location = System::Drawing::Point(379, 92);
			this->EndTime->Name = L"EndTime";
			this->EndTime->ShowUpDown = true;
			this->EndTime->Size = System::Drawing::Size(200, 25);
			this->EndTime->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(583, 165);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 7;
			// 
			// WritePlan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 415);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->EndTime);
			this->Controls->Add(this->StartTime);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->End);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Detail);
			this->Name = L"WritePlan";
			this->Text = L"WritePlan";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!(this->Title->Text == "")) {

			// date information
			int start_year = this->Start->Value.Year;
			int start_month = this->Start->Value.Month;
			int start_day = this->Start->Value.Day;
			int end_year = this->End->Value.Year;
			int end_month = this->End->Value.Month;
			int end_day = this->End->Value.Day;
			string str_start_year = to_string(start_year);
			string str_start_month = to_string(start_month);
			string str_start_day = to_string(start_day);
			string str_end_year = to_string(end_year);
			string str_end_month = to_string(end_month);
			string str_end_day = to_string(end_day);

			// make folder
			string folderName_year = str_start_year + "'s Plan";
			string folderName_month = str_start_month + "'s Plan";
			System::String^ FolderName_year = gcnew String(folderName_year.c_str());
			System::String^ FolderName_month = gcnew String(folderName_month.c_str());
			System::String^ yearPath = gcnew String(".\\" + FolderName_year);
			System::String^ monthPath = gcnew String("\\" + FolderName_month);
			if (!System::IO::Directory::Exists(FolderName_year)) {
				System::IO::Directory::CreateDirectory(FolderName_year);
			}
			if (!System::IO::Directory::Exists(yearPath + "\\" + FolderName_month)) {
				System::IO::Directory::CreateDirectory(yearPath + "\\" + FolderName_month);
			}

			// make textfile in folder
			string textName = str_start_year + "-" + str_start_month + "-" + str_start_day;
			System::String^ TextName = gcnew String(textName.c_str());
			StreamWriter^ File = gcnew StreamWriter(yearPath + monthPath + "\\" + TextName + "_Plan.txt", true);

			// period information
			string startDate;
			string endDate;
			if (start_year != end_year) {
				startDate = str_start_year + "-" + str_start_month + "-" + str_start_day;
				endDate = str_end_year + "-" + str_end_month + "-" + str_end_day;
			}
			else if (start_month != end_month) {
				startDate = str_start_month + "-" + str_start_day;
				endDate = str_end_month + "-" + str_end_day;
			}
			else if (start_day != end_day) {
				startDate = str_start_day;
				endDate = str_end_day;
			}

			//write textfile
			File->Write(this->Title->Text + "\r\n");
			File->Write(this->Detail->Text + "\r\n");
			File->Close();
			this->Close();
		}
		else {
			MessageBox::Show("제목을 입력해주세요.");
		}
	}

};
}
