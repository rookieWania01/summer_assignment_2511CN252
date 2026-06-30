#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, ans = "";

    getline(cin, str);

    for(char ch : str) {
        if(ch != ' ')
            ans += ch;
    }

    cout << ans;

    return 0;
}