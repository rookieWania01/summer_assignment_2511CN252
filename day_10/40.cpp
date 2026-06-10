#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    for(int i = 1;i<=n;i++){
        char a = 'A';
        for(int k = 1;k<=n-i;k++){
            cout << " ";
        }
        
        for(int j = 1;j<=i;j++){
            cout << a ;
            a++;
        }
        a--;

        for(int l = 1;l<=i-1;l++){
            a--;
            cout << a;
        }
    
        cout << endl;    
    }
    return 0;
}