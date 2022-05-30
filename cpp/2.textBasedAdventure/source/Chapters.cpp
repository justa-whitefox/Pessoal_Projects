#include <iostream>
#include "ChaptersDeclarations.h"

void BearZoneChapter(bool& confirm) {
	string action;
	cout << "walking through the zone to the left you find a bear blocking the way\n"
		"this friendly carnivore look like is eating!\n"
		"\"what should i do?\" you ask for yourself \"should i >steal< it's food? or should i >attack< it? maybe >taunt< it or even, just >wait< to something to hapen\"\n>> ";
	cin >> action;

	if (action == "steal") {
		cout << "Your have an wanderfull idea! \"Why i don't just steal the food from a bear mouth?\" you say, \"What chould even go wrong?\" you think.\n"
			"you aproate the pool thing, and the you notice something \"was his so big before\" you ask for yourself seen the 7' feet tall bear\n"
			"when you notice that this wasn't a good idea, the bear look into your eyes \"shit!\"you say, and the last thing you see is the bear start runing to you, when red blur you sight\n";
		GameOver(confirm, "your own stupidy, the bear ripped you apart with reason");

	}
	else if (action == "attack") {
		cout << "you decide to attack it, you gather courage and aproach quickly\n"
				 "but all your courage disapear when you start to look to it's biceps and chest\n"
				 "you din't spected to a bear to be buff right?\n"
				 "in the time you are amazed by the bear muscles it aproach you faster than a car, its biceps is the last thing you seen\n";
				"\"Be crushed by this amazing biceps and triceps...\" chuckling at you stupid last thoughts your sight fade to black\n";
		GameOver(confirm, "enpresive muscles, hitted in the face by a bear's punch");

	}
	else if (action == "taunt") {
		cout << "you decide to taunt the pool creature, or beter i say 'pool you'\n"
				"the bear is not afraid, no, is instead angry\n"
				"angry with you\n"
				"the last thing you see it's his claws\n";
		GameOver(confirm, "a bear, you are teared apart by it's claws");
	}
	else if (action == "wait") {
		cout << "against all reason you decide to wait in this place with nothing but a bear\n"
			"then you wait...\n"
			"and wait...\n"
			"and wait a little bit more...\n"
			"but is just like the proverb says 'patience is a virtue' your pacience is rewarded the bear stop eating and walk away\n"
			"you decide to continue in your way\n";
		EndGame(confirm);

	}
	else {
		cout << "Your hands are shacking, you start to breathe heavily, you brain search for oxigen, you're so scared and nervous that you can't choose, your vision fade to black" << endl;
		GameOver(confirm, "your illness, you as to nervous and had a heart attack");
	}

}
void BlackRoomChapter(bool& confirm) {
	string choice;
	cout << "you pass through a door that lead you to a complete dark place, there is no light source here, you badly is able to see your own hands"
		"you can't feel anything either just the cold tiles on your feets, but somehow you can hear a lot\n"
		"you can hear the roaming of the water\n"
		"you can hear the blow of the wind\n"
		"you can hear the strike of the thunder\n"
		"and the fury of the sky coming down like rain\n"
		"but even hearing all this you can't feel it, feel so close and so far\n"
		"you hear the roaming of the water, but there is no water\n"
		"you hear the blow of the wind, but none reache you\n"
		"you hear the strike of the thunder, but none lightning ignites the sky\n"
		"you hear the fury of the rain, but there is none humidity\n"
		"and in the center of this wierd felling you choose to\n"
		"[>search< for answer], [try to >find< a door], [blindy >look< around] or [>wait<]\n>> ";

	cin >> choice;

	if (choice == "search" || choice == "Search" || choice == "SEARCH") {
		cout << "you start to search everywhere\n"
			"you search on the floor\n"
			"you search on the walls\n"
			"but you didn't find anything useful\n"
			"walking around you notice something\n"
			"\"how i able to hear all this noise but this place feel just like an room?\"\n"
			"\"and how i know i search the walls if i never find one?\"\n"
			"\"actually this place fells infinity\"\n"
			"guided by this thoughts you keep walking try to find answers to this answerless questions.\n"
			"you keep trying to find answers to your questions, but there is none\n"
			"you search and search, stop thing on yourself, stop thinging on back home or exit, you just want one thing,\n"
			"answers\n";

		GameOver(confirm, "oblivion, the only purpuse of your existence is to find a answer to the question, everything else can be forgoten, the question? you forgot");
	
	} 
	else if (choice == "wait" || choice == "Wait" || choice == "WAIT") {
		cout << "you decide to wait for a time, in hope that something possitive hapen, or some rescue\n"
			"you didn't to wait for to much and something hapen, unfortunely isn't wasn't possitive, nor the rescue\n"
			"this something come from behide, you wasn't even able to see what it was\n";

		GameOver(confirm, "the unknown, something kills you");

	} 
	else if (choice == "find" || choice == "Find" || choice == "FIND") {
		cout << "you try to find something like a door, a trap door, any type of exit\n"
			"you find somekind of exit, but not the exit you want\n"
			"you find a type of ravine, a realy deep one, you for sure don't wanna fall here\n"
			"unfortunely fall or not don't isn't up to you, the ground under you crack and fall, you try worthless to grab something...\n"
			"but there is nothing to grab, you fall under the abyss bellow\n";
		GameOver(confirm, "gravity, you hit the ground to hard, become a bloody spot on the floor");

	} 
	else if (choice == "look" || choice == "Look" || choice == "LOOK") {
		cout << "you just go looking around seing if you find something useful\n"
			"you actualy find a wierd white door\n"
			"it is in the middle of the place, and even everything is black\n"
			"you can see this door cleary, then when you aproach the door\n"
			"the suround sudently become quiety, no just quiety but complete soundless\n"
			"the sounds that hit you ear all the time just end subtly\n"
			"you are aware of haw wierd this is, but there is nothing else, so you try to open the wierd white door\n"
			"and even if there is nothing around the door, and you know that is not supose to have nothing in the other side\n"
			"there it is, the other side of the door is a complete diferente place, a green place just like the one you wake up in\n"
			"you don't know how and even care, you just want to get out of this dark and confusing place so you pass through the door, and \n";
		EndGame(confirm);
	} 
	else {
		cout << "you don't know what to do so, you do nothing, for so long, that you forget why you are here\n";
		GameOver(confirm, "old, forgeting who you are, alone, in the dark");
	}

}
void MonsterFieldChapter(bool& confirm) {
	string choice;
	cout << "you as stupid to choose to be to much straigh up, and entered a dark, umid, and scary forest\n"
		"you see the trees that rise upon you, going all way up to the skys\n"
		"and cover all the light making everything pich black\n"
		"walking in the dark with in companion with the mosquitoes, you see something ahead\n"
		"you try to look closer but the darkness don't let you see correctly, so you decide...\n"
		"[>attack< whatever it is] or [>sneak< around it to elsewhere]\n>> ";

	cin >> choice;
	if (choice == "attack" || choice == "Attack" || choice == "ATTACK") {
		cout << "you choose the death, [aham] i mean, you choose to attack this unknown creature\n"
			"in his habitat\n"
			"without wepons\n"
			"without any kind of combat knowledge or experience\n"
			"you even see correcty what hapen, the only thin you notice is a blur shadow, everything spining, and a top view of your body\n";
		GameOver(confirm, "something, you didn't even saw your executer");
	}
	else if (choice == "sneak" || choice == "Sneak" || choice == "SNEAK") {
		cout << "you use your last braincells to choose a wise path\n"
			"avoid the heck that thing is and run to safety, avoiding any type of conflict\n"
			"thanks to you wisedom and cowardice you safely reach you destiny\n";
		EndGame(confirm);
	}
	else {
		cout << "you can't think correcty on what to do, or you just can't choose right\n"
			"you fear make you instable, you start to notice thing you didn't before\n"
			"like the red eyes around you, and the 'skeeesh' sound above you, in the moment you notice the sticky mucus in your shouder and look up\n"
			"you start runing without look behide, \"i have to run from it\" you say, when running, the only problem is\n"
			"you didn't look to where you are running and actualy run directy to that unknown creature\n"
			"the last thing you see is it's fangs coming closer to your face\n";
		GameOver(confirm, "the unknown, that eat your face");
	}

}
void GameOver(bool& confirm, const char* reason) {
	char choice;
	cout << "you died by " << reason << endl;
	cout << "is given to you an undeserved second change, will you take it?[y/n]\n>> ";
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		cout << "you decide to take the shot" << endl;
	}
	else {
		confirm = false;
	}
}
void EndGame(bool& condition) {
	char choice;

	cout << "your reach a colin that look safe and decide to rest here\n"
		"you don't know what just hapen but you thin that will not become safier so you prepare yourself\n"
		"TO BE CONTINUED\n"
		"do you want to play again?[Y/N]\n>> ";
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		cout << "you decide to just follow the wind and step ahead\n"
				"in the moment you step forward you sigh blacks out\n";
	}
	else {
		condition = false;
	}


}
