//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
 // ������� ��� ������� - ������� ������
Background = new Graphics::TBitmap(); // ���
Bitmap = new Graphics::TBitmap(); // ��������
Buf = new Graphics::TBitmap(); // �����
// ��������� � ������� ���
//Background->LoadFromFile("aqua2.bmp");
//Form1->Image1->Canvas->Draw(0,0,Background);
// ��������� ��������, ������� ����� ���������
//Bitmap->LoadFromFile("fish2.bmp");
// ��������� "����������" ���� 
Bitmap->Transparent = true;
Bitmap->TransparentColor = Bitmap->Canvas->Pixels[1][1];
// ������� ����� ��� ���������� ����� ������� ����,
// �� ������� ������������� ��������
W= Bitmap->Width;
H= Bitmap->Height;
Buf->Width= W;
Buf->Height=H;
Buf->Palette=Background->Palette; // ����� ���������� ������������ ������
Buf->Canvas->CopyMode=cmSrcCopy;
// ��������� ������� ������, ������� ����� ��������������
// ��� �������������� ����
BufRct=Bounds(0,0,W,H);
// ��������� ��������� ��������
x = 0; x1 = -80;
y = 100; y1 = 80;
// ��������� ����������� ������� ����
BackRct=Bounds(x,y,W,H);
// � �������� ��
Buf->Canvas->CopyRect(BufRct,Background->Canvas,BackRct);
Form1->DoubleBuffered = true;

timeAque=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
// ��������������� ���� (�� ������) ������ �������
/*
Form1->Image1->Canvas->Draw(x,y,Buf);
x++; x1++;//�������� ������
if (x>Form1->Image1->Width-50) x=-W;  //����� ����� ��������� �����
// ��������� ����������� ������� ����
BackRct=Bounds(x,y,W,H);
// �������� �� �����
Buf->Canvas->CopyRect(BufRct,Background->Canvas,BackRct);
// ������� �������
Form1->Image1->Canvas->Draw(x,y,Bitmap);
Form1->Image1->Canvas->Draw(x1,y1,Bitmap);
Form1->Image1->Canvas->Draw(x1-100,y1,Bitmap);
*/
aqua->Run();
Label2->Caption = IntToStr(timeAque);
timeAque++;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
int ii1 = StrToInt(Edit1->Text);
int iy1 = StrToInt(Edit2->Text);
int ii2 = StrToInt(Edit3->Text);
int iy2 = StrToInt(Edit4->Text);
aqua = new TAqua(Background, Image1, ii1, iy1, ii2, iy2, CheckBox1->Checked, CheckBox2->Checked);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{
Timer1->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Timer1->Enabled = false;
 timeAque = 0;
}
//---------------------------------------------------------------------------

