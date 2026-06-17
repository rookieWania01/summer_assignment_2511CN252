#include<bits/stdc++.h>
using namespace std;
int newno(int n,int rev = 0){
     
    if (n==0) return rev;
    else return newno(n/10,rev*10 + n%10);
}

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "reverse of " << n << " is " << newno(n);
    return 0;

}