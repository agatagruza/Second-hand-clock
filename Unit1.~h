//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTrackBar *TB;
        TButton *BStart;
        TButton *BStop;
        TMemo *Memo;
        TLabel *LPozostalo;
        TLabel *Luplyn;
        TLabel *Label3;
        TPaintBox *PB;
        TTimer *Timer;
        TLabel *Label1;
        void __fastcall PBPaint(TObject *Sender);
        void __fastcall BStartClick(TObject *Sender);
        void __fastcall BStopClick(TObject *Sender);
        void __fastcall TBChange(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Maluj();
        void __fastcall Maluj2(double x2,double y2);
        void __fastcall TimerTimer(TObject *Sender);
private:
int r; //promien
int k;
double s;  //kat odpowiadajacy jednej sekundzie
double x;
double y;
int TBPos,licz,pom;

	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
