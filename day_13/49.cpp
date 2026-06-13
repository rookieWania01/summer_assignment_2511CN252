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

    int j = 0;
    while(j<n){
        cout << arr[j] << " ";
        j++;
    }

    return 0;

}