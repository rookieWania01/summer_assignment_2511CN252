#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    if(n==1 || n== 2) cout << 1;
    int a = 1,b =1;
    int c = 0;
    for(int i =1;i<=n-2;i++){
        c = a+b;
        a = b;
        b = c;
    }
    cout << c;
}

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    fibo(n);
    return 0;
}