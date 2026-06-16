#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];
    int mx = INT_MIN;

    cout << "enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int freq[mx + 1] = {0};

    for(int i = 0; i < n; i++){
        if(freq[arr[i]] == 0){
            cout << arr[i] << " ";
            freq[arr[i]]++;
        }
    }
}