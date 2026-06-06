#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<" enter the binary no: ";
    cin >> n;
    int decimal = 0;
    int m = n;
    int x = 0;
    while(m!=0){
        decimal = decimal + m%10 * pow(2,x);
        x++;
        m = m/10;
    }
    
    cout << "the decimal of " << n << " " << "is " << decimal;
    
    return 0;
}