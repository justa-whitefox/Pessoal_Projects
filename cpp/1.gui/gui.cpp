//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "gui.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addButtonClick(TObject *Sender)
{
	String taskText = taskInputField->Text;
	if (taskText != " " && taskText != ""){
		taskList->Items->Add(taskText);
	}


	taskInputField->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::taskListItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
    taskList->Items->Delete(index);
}
//---------------------------------------------------------------------------
