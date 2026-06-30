#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, word = "", longest = "";

    getline(cin, str);

    str += ' ';

    for(char ch : str) {

        if(ch != ' ')
            word += ch;
        else {
            if(word.length() > longest.length())
                longest = word;

            word = "";
        }
    }

    cout << "Longest Word = " << longest;

    return 0;
}