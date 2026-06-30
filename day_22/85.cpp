#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int i = 0;
    int j = str.length() - 1;

    bool palindrome = true;

    while(i < j) {
        if(str[i] != str[j]) {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}