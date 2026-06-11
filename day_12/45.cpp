#include<bits/stdc++.h>
using namespace std;
  int newno(int n,int rev = 0){
        if(n==0) return rev;
        return newno(n/10,rev*10 + n%10);
    }

void palindrome(int n){
   if(newno(n) == n) cout << "entered no is a palindrome";
   else cout << "entered no isnt a palindrome";
  }

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    palindrome(n);
    return 0;
}