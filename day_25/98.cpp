#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);

    int freq[256]={0};

    for(char ch:s1)
        freq[ch]=1;

    for(char ch:s2){
        if(freq[ch]==1){
            cout<<ch<<" ";
            freq[ch]=2;
        }
    }

    return 0;
}