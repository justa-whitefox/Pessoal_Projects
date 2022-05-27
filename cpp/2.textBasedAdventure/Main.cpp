#include <iostream>
#include <string>
#include "ChaptersDeclarations.h"

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

	}
	else if (direction == "right" || direction == "Right" || direction == "RIGHT") {
		cout << "you're the type that make everything perfect, you're a righteous person, so you choose to go to the right " << endl;
		BlackRoomChapter();

	}
	else if (direction == "forward" || direction == "Forward" || direction == "FORWARD") {
		cout << "you're a straight up person so you choose step Forward";
		MonsterFieldChapter();

	}
	else {
		cout << "'cause your incapability of type a direction you will receave a \nGAMEOVER" << endl;
		GameOver();
	}

	EndGame();

	return 0;
}