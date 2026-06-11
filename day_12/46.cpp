#include<bits/stdc++.h>
using namespace std;

int dig(int n, int digit = 0){
    if(n == 0){
        if(digit == 0) return 1;
        return digit;
    }
    return dig(n/10, digit + 1);
}

int newno(int n, int digit, int sum = 0){
    if(n == 0) return sum;
    int term = (int)pow(n % 10, digit);
    return newno(n/10, digit, sum + term);
}

void armstrong(int n, int digit){
    if(newno(n, digit) == n) cout << "entered no is an armstrong no";
    else cout << "entered no isn't an armstrong no";
}

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    armstrong(n, dig(n));
    return 0;
}