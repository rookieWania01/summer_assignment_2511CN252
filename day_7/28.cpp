#include<bits/stdc++.h>
using namespace std;
int reverse(int n,int rev = 0){
     
    if (n==0) return rev;
    else return reverse(n/10,rev*10 + n%10);
}

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "reverse of " << n << " is " << reverse(n);
    return 0;

}