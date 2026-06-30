#include <iostream>
using namespace std;

int main(){

    int secret=50;
    int guess;

    do{
        cout<<"Enter Guess: ";
        cin>>guess;

        if(guess<secret)
            cout<<"Too Low\n";
        else if(guess>secret)
            cout<<"Too High\n";
        else
            cout<<"Correct!\n";

    }while(guess!=secret);

    return 0;
}