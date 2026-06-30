#include <iostream>
using namespace std;

int main(){

    int score=0;
    char ans;

    cout<<"Q1. Capital of India?\n";
    cout<<"a) Delhi\nb) Mumbai\nc) Chennai\n";
    cin>>ans;

    if(ans=='a'||ans=='A')
        score++;

    cout<<"Q2. 5 + 7 = ?\n";
    cout<<"a)10\nb)12\nc)15\n";
    cin>>ans;

    if(ans=='b'||ans=='B')
        score++;

    cout<<"Final Score = "<<score<<"/2";

    return 0;
}