#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<" enter the decimal no: ";
    cin >> n;
    int binary = 0;
    int m = n;
    int x = 1;

    while(m!=0){
        binary = binary + m%2*x;
        x = x*10;
        m = m/2;
    }

    cout << "the binary of " << n << " " << "is " << binary;

    return 0;
}