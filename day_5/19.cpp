#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int m = n;
    for(int i =2;i<=n;i++){
        while(m%i==0){
            cout << i << " ";
            m=m/i;
        }
    }
    return 0;
}