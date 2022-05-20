//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm {
__published:	// IDE-managed Components
	TRadioButton *Answer1RadioButton;
	TRadioButton *Answer3RadioButton;
	TRadioButton *Answer2RadioButton;
	TLabel *QuestionLabel;
	TButton *ConfirmButton;
	TLabel *PointsLabel;
	TLabel *Label3;
	void __fastcall Answer1RadioButtonChange(TObject *Sender);
	void __fastcall Answer2RadioButtonChange(TObject *Sender);
	void __fastcall Answer3RadioButtonChange(TObject *Sender);
	void __fastcall ConfirmButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
