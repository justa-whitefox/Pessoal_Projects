#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void GrassZoneChapter();

int main() {
    GrassZoneChapter();

    return 0;
}

void GrassZoneChapter(){
    string playerName;
    cout << "you wake up and see a plain of green grass, indeed, you never seen such a green in your whole life!" << endl;
    cout << "\"in my whole life?\" you ask for yourself" << endl;
    cout << "\"but who am i?\" you keep asking" << endl;
    cout << "you try to remenber who you are but only one name came out \n>> ";
    getline(cin, playerName);
    cout << "\"" << playerName << "\", is that my name?\" you don't know, but you decide to call yourself like that." << endl;

}