#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "enter array elements: ";

    int i = 0;
    while(i<n){
        cin >> arr[i];
        i++;
    }

    int tofind;
    cout << "Enter element to search: ";
    cin >> tofind;

    bool exists = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == tofind) {
            cout << "Element found at index " << i << endl;
            exists = true;
            break;
        }
    }

    if(!exists) cout << "Element not found";

    return 0;

}