#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cout <<" enter the x and n: ";
    cin >> x >> n;
    int m = x;
    for(int i = 1;i<n;i++){
        m = m * x;
    }
    cout << "x to the power n is: " << " " << "is " << m;
    return 0;
}