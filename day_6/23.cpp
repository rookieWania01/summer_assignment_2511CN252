#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<" enter the binary no: ";
    cin >> n;
    int m = n;
    int count = 0;

    while(m!=0){
        count += m%10;
        m = m/10;
    }
    cout << "the set bits in " << n << " " << "is " << count;
    return 0;
}