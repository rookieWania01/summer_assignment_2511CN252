#include <iostream>
using namespace std;

int main(){

    int balance=10000;
    int choice,amount;

    cout<<"1. Check Balance\n";
    cout<<"2. Deposit\n";
    cout<<"3. Withdraw\n";

    cin>>choice;

    switch(choice){

        case 1:
            cout<<"Balance = "<<balance;
            break;

        case 2:
            cin>>amount;
            balance+=amount;
            cout<<"Balance = "<<balance;
            break;

        case 3:
            cin>>amount;

            if(amount<=balance){
                balance-=amount;
                cout<<"Balance = "<<balance;
            }
            else{
                cout<<"Insufficient Balance";
            }
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}