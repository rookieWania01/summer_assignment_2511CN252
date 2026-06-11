#include<bits/stdc++.h>
using namespace std;

void perfect(int n){
    int sum = 0;
    int m = n;
    for(int i = 1;i<n;i++){
        if(m%i == 0) sum+=i;
    }
    if(sum == n) cout << "its a perfect no";
    else cout << "its not a perfect no";
}

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    perfect(n);
    return 0;
}