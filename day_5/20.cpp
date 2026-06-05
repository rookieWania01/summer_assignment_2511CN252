#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int m = n;
    int maxprime;
    for(int i =2;i<=n;i++){
        while(m%i==0){
            maxprime = i;
            m=m/i;
        }
    }
    cout << "max prime factor is: " << maxprime;
    return 0;
}