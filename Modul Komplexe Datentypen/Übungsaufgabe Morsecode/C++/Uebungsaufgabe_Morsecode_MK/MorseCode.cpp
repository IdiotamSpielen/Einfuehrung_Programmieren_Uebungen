#include <iostream>
#include <map>
using namespace std;

//Primary:
//[ ] Entwickle ein Programm, das Buchstaben in Morsecode übersetzt
//Speichern Sie hierzu einfach einen Buchstaben in einer Variablen und lassen Sie diesen sodann übersetzten.
//Die Morsecode übersetzungstabelle befindet sich hier: https://en.wikipedia.org/wiki/Morse_code#/media/File:International_Morse_Code.svg
//Secondary:
//[ ] Übersetzung ganzer wörter
//[ ] Übersetzung ganzer sätze

int main()
{
    char letter;
    map<char, string> morse_codes = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."},
        {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"}
    };
    cout << "Welchen Buchstaben möchten sie Uebersetzen?" << endl;
    cin >> letter;

    if (morse_codes.count(letter))
    {
        cout << morse_codes.at(letter);
    }
    
    cout << letter;



    return 0;
}