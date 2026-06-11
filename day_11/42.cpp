#include<bits/stdc++.h>
using namespace std;
void max(int a,int b){
    if(a>b) cout << "max: " << a;
    else cout << "max: " << b;
}
int main(){

    int m,n;
    cout << "enter m and n: ";
    cin >> m >> n;
    max(m,n);
    return 0;
}