#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int freq[256] = {0};

    for(char ch : str)
        freq[ch]++;

    int maxFreq = 0;
    char ans;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = char(i);
        }
    }

    cout << "Maximum Occurring Character = " << ans;

    return 0;
}