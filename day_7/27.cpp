#include<bits/stdc++.h>
using namespace std;
int sum(int n){
     int summ = 0;
    if (n==0) return 0;
    else {
        return summ + n%10 + sum(n/10);
    }
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "sum of " << n << " is " << sum(n);
    return 0;

}