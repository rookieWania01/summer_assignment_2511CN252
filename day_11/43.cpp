#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    int a = 0;
    for(int i = 2;i<n;i++){
        if(n%i ==0 ){
            a = 1;
            break;
        }
    }
    if(a == 0) cout << "entered no is prime";
    else cout << "entered no isnt prime";
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    prime(n);
    return 0;
}