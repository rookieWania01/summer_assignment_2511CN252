#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int sp = 0;
    int st = 2*n - 1;
    for(int i = 1;i<=n;i++){
        for(int k = 1;k<=sp;k++){
            cout << " ";
        }
        for(int j = 1;j<=st;j++){
            cout << "*";
        }
        st-=2;
        sp++;
        cout << endl;    
    }
    return 0;
}