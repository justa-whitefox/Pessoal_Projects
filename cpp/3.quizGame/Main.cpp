//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <queue>
using std::queue;

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
class Question {
	public:
		char* Text;
		char* Answer1;
		char* Answer2;
		char* Answer3;
		int CorrectAnswer;

		Question(){

		}

		Question(char* text, char* ans1, char* ans2, char* ans3, int correctAns){
			Text = text;
			Answer1 = ans1;
			Answer2 = ans2;
			Answer3 = ans3;
			CorrectAnswer = correctAns;
		}
};

queue<Question> LoadQuestions(){
	Question q1 = Question("Which color does not appear in olympic ring?", "black", "Orange", "White", 2);
	Question q2 = Question("What is the chemical formula to table salt?", "NaC1", "NaC12", "Na2C1", 1);
	Question q3 = Question("Which is the longest river in the world?", "nilo", "mississipi", "amazonas", 1);

	queue<Question> Questions;
	Questions.push(q1);
	Questions.push(q2);
	Questions.push(q3);

	return Questions;
}

queue<Question> questions;
Question currentQuestion;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner){
	questions = LoadQuestion();
	currentQuestion = questions.front();
}
//---------------------------------------------------------------------------
