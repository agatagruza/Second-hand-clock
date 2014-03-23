//---------------------------------------------------------------------------
#include <math>
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
s=M_PI/30;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PBPaint(TObject *Sender)
{
Maluj();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BStartClick(TObject *Sender)
{
if(Timer->Enabled==false&&TB->Position>0)
  {
   if(pom==0)
     TBPos=TB->Position;
   Timer->Enabled=true;

   PB->Canvas->Pen->Color=clRed;
   PB->Canvas->MoveTo(PB->Width/2,PB->Height/2);
   PB->Canvas->LineTo(x,y);
  }
  
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BStopClick(TObject *Sender)
{
Timer->Enabled=false;
TB->Enabled=true;
pom++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TBChange(TObject *Sender)
{
if(TB->Position==0)
{
   LPozostalo->Caption="Pozosta這: 0 sek";
   Luplyn->Caption="Up造n窸o: 0 sek";
   pom=0;
}
LPozostalo->Caption="Pozosta這: " + IntToStr(TB->Position) +" sek";
if(Timer->Enabled==false)
  {
  TB->Enabled=true;
  Maluj(); pom=0;
  k=TB->Position;
  Maluj();
  double kat=s*k;  //s to kat odpowiadajacy 1 sekundzie
  x=r*cos(kat-M_PI/2)+r;
  y=r*sin(kat-M_PI/2)+r;
  PB->Canvas->Pen->Color=clRed;
  PB->Canvas->MoveTo(PB->Width/2,PB->Height/2);
  PB->Canvas->LineTo(x,y);
  }
else
   {
   TB->Enabled=false;
   licz=TBPos-TB->Position;
   Maluj2(r*cos((s*(licz))-M_PI/2)+r,r*sin((s*(licz))-M_PI/2)+r);
   Luplyn->Caption="Up造n窸o: " + IntToStr(licz) +" sek";
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
r=PB->Width/2;
pom=0;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Maluj()
{
PB->Canvas->Pen->Color=clYellow;
PB->Canvas->Brush->Color=clYellow;
PB->Canvas->Ellipse(0,0,PB->Width,PB->Height);
PB->Canvas->Pen->Color=clBlack;
PB->Canvas->MoveTo(PB->Width/2,PB->Height/2);
PB->Canvas->LineTo(PB->Width/2,0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Maluj2(double x2,double y2)
{
PB->Canvas->Pen->Color=clBlue;
PB->Canvas->Brush->Color=clBlue;
PB->Canvas->Pie(0,  0,  PB->Width,  PB->Width,x2,y2, PB->Width/2,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimerTimer(TObject *Sender)
{
if(TB->Position>=1)
{
TB->Position--;
}
else
{Timer->Enabled=false;
 ShowMessage(Memo->Text);
}

}
//---------------------------------------------------------------------------






