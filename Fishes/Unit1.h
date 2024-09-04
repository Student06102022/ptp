//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <GIFImg.hpp>

#include "Unit2.h";
//---------------------------------------------------------------------------

class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TTimer *Timer1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit3;
	TEdit *Edit4;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations

	Graphics::TBitmap *Background, *Bitmap, *Buf;
	//картинки для фона, кораблика и буфер для хранения части рисунка под корабликом
	int W,H,x,y; //ширина и высота кораблика, его координаты
	TRect BufRct,BackRct; //прямоугольные области, понадобятся для передачи данных в метод CopyRect
	int x1, y1;
	// -----------
	TAqua *aqua;
	bool done;
	int timeAque;

	
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#endif
