#include<bits/stdc++.h>
using namespace std;
void factorial(int n){
    int factorial = 1;
    for(int i = 2;i<=n;i++){
        factorial = factorial * i;
    }
  
   cout << "factorial: " << factorial;
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    factorial(n);
    return 0;
}