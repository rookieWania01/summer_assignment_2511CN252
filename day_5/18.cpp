#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int m = n;
    int sum = 0;
    while(m!=0){
    int fact = 1;
    int p = m%10;
    m = m/10;
    for(int i = 2;i<=p;i++){
        fact = fact * i;
       }
       sum+=fact;
    }
    if(sum == n) cout << n << " is a strong number";
    else cout << n << "is not a strong number";
    return 0;
}