#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, ans = "";

    getline(cin, str);

    int freq[256] = {0};

    for(char ch : str) {

        if(freq[ch] == 0) {
            ans += ch;
            freq[ch]++;
        }
    }

    cout << ans;

    return 0;
}