#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int words = 0;

    for(int i = 0; i < str.length(); i++) {
        if((i == 0 && str[i] != ' ') ||
           (str[i] != ' ' && str[i-1] == ' '))
            words++;
    }

    cout << "Words = " << words;

    return 0;
}