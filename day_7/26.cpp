#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if (n==1 || n==2) return 1;
    else {
        return fibo (n-1) + fibo(n-2);
    }
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "fibonacci of " << n << " is " << fibo(n);
    return 0;

}