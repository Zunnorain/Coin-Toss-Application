#pragma once
using namespace WMPLib;

namespace CoinTossApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Result2
	/// </summary>
	public ref class Result2 : public System::Windows::Forms::Form
	{
		
		WindowsMediaPlayer^ player = gcnew WindowsMediaPlayer;
		
		//WindowsMediaPlayer::openPlayer^ player = gcnew WindowsMediaPlayer::openPlayerClass();

		//WindowsMediaPlayer::SwitchedToPlayerApplication player = gcnew WindowsMediaPlayer ;
	

	public:
		Result2(void)
		{
			InitializeComponent();
			player->URL = "coindrop.mp3";
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Result2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Result2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(92, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 104);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tails!";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(110, 202);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(172, 23);
			this->progressBar1->TabIndex = 3;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Result2::progressBar1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Result2::timer1_Tick);
			// 
			// Result2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Crimson;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(396, 283);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Result2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Result";
			this->Load += gcnew System::EventHandler(this, &Result2::Result2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->ActiveForm->Close();
	}*/
	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		progressBar1->Increment(3);
		if (progressBar1->Value == 100) {
			timer1->Stop();
			this->ActiveForm->Close();
		}
	}
private: System::Void Result2_Load(System::Object^  sender, System::EventArgs^  e) {
	player->controls->play();
}
};
}
