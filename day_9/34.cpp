#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    for(int i = 0;i<n;i++){
        int a = 1;
        for(int j = 1;j<=n - i;j++){
            cout << a;
            a++;
        }
        cout << endl;    
    }
    return 0;
}