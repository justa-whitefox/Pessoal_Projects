#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void MonsterFieldChapter();
void BearZoneChapter();
void BlackRoomChapter();
void EndGame();
void GameOver();
void PlayAgain();

int main() {
	string direction;
	string playerName;

	cout << "you wake up and see a plain of green grass, indeed, you never seen such a green in your whole life!" << endl;
	cout << "\"in my whole life?\" you ask for yourself" << endl;
	cout << "\"but who am i?\" you keep asking" << endl;
	cout << "you try to remenber who you are but only one name came out \n>> ";
	getline(cin, playerName);

	cout << "\"" << playerName << "\", is that my name?\" you don't know, but you decide to call yourself like that." << endl;
	cout << "\"For now i'm should just pick a direction and go! \" so what direction will you choose? left, right or step forward?\n>> ";
	cin >> direction;
	
	if (direction == "left" || direction == "Left" || direction == "LEFT") {
		cout << "you're a person who don't give a damn to supertisions, likes black cats, etc, so you choose left" << endl;
		BearZoneChapter();
	
	} else if(direction == "right" || direction == "Right" || direction == "RIGHT") {
		cout << "you're the type that make everything perfect, you're a righteous person, so you choose to go to the right " << endl;
		BlackRoomChapter();
		
	} else if(direction == "forward" || direction == "Forward" || direction == "FORWARD") {
		cout << "you're a straight up person so you choose step Forward";
		MonsterFieldChapter();
	
	} else {
		cout << "'cause your incapability of type a direction you will receave a \nGAMEOVER" << endl;
		GameOver();
	}

	EndGame();

    return 0;
}

void GrassZoneChapter(){
    
	
}

void BearZoneChapter() {
	string action;
	cout << "walking through the zone to the left you find a bear blocking the way" << endl;
	cout << "this friendly carnivore look like is eating!" << endl;
	cout << "\"what should i do?\" you ask for yourself \"should i 'steal' it's food? or should i 'attack' it? maybe 'taunt' it or even, just 'wait' to something to hapen\" so what you choose?\n>> ";
	cin >> action;

	if (action == "steal") {
		cout << "Your have an wanderfull idea! \"Why i don't just steal the food from a bear mouth?\" you say, \"What chould even go wrong?\" you think." << endl;
		cout << "you aproate the pool thing, and the you notice something \"was his so big before\" you ask for yourself seen the 7' feet tall bear" << endl;
		cout << "when you notice that this wasn't a good idea, the bear look into your eyes \"shit!\"you say, and the last thing you see is the bear start runing to you, when red blur you sight" << endl;
		GameOver();

	} else if (action == "attack") {
		cout << "you decide to attack it, you gather courage and aproach quickly" << endl;
		cout << "but all your courage disapear when you start to look to it's biceps and chest" << endl;
		cout << "you din't spected to a bear to be buff right?" << endl;
		cout << "in the time you are amazed by the bear muscles it aproach you faster than a car, its biceps is the last thing you seen" << endl;
		cout << "\"Be crushed by this amazing biceps and triceps...\" chuckling at you stupid last thoughts your sight fade to black" << endl;
		GameOver();
	
	} else if (action == "taunt") {

	} else if (action == "wait") {
		cout << "against all reason you decide to wait in this place with nothing but a bear" << endl;
		cout << "then you wait..." << endl;
		cout << "and wait..." << endl;
		cout << "and wait a little bit more..." << endl;
		cout << "but is just like the proverb says 'patience is a virtue' your pacience is rewarded the bear stop eating and walk away" << endl;
		cout << "you decide to continue in your way" << endl;

	} else {
		cout << "Your hands are shacking, you start to breathe heavily, you brain search for oxigen, you're so scared and nervous that you can't choose, your vision fade to black" << endl;
		GameOver();
	}

}
void BlackRoomChapter() {}
void MonsterFieldChapter() {}
void GameOver() {}
void EndGame() {
	char choice;

	cout << "your reach a colin that look safe and decide to rest here" << endl;
	cout << "do you want to play again?" << endl;
	cin >> choice;
}
void PlayAgain() {}
