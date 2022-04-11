# include <iostream>

using namespace std;

int main()
{
    string color, pluralNoun, personlove, drug, animal;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter a person who you love: ";
    getline(cin, personlove);

    cout << "Enter a drug: ";
    getline(cin, drug);

    cout << "Enter an animal: ";
    getline(cin, animal);

    cout << "Houses are " << color << endl;
    cout <<  pluralNoun << " are vicious" << endl;
    cout << "I love " << personlove << endl;
    cout << "I don't take " << drug << endl;
    cout << "Have you seen this " << animal << "?" << endl;


    return 0;
}

