# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    string noun1, color, pluralNoun, adjective1, personlove, drug, animal, moviecharacter, adjective2;

    cout << "Enter a common noun: ";
    getline(cin, noun1);

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter an adjective: ";
    getline(cin, adjective1);

    cout << "Enter a person who you love: ";
    getline(cin, personlove);

    cout << "Enter a drug: ";
    getline(cin, drug);

    cout << "Enter an animal: ";
    getline(cin, animal);

    cout << "Enter a movie character: ";
    getline(cin, moviecharacter);

    cout << "Enter an adjective: ";
    getline(cin, adjective2);

    cout << noun1 << " are so " << color << endl;
    cout <<  pluralNoun << " are " << adjective1 << endl;
    cout << "I love " << personlove << endl;
    cout << "I don't take " << drug << endl;
    cout << "Have you seen this " << animal << "?" << endl;
    cout << "The last movie featuring " << moviecharacter << " was so " << adjective2;


    return 0;
}
