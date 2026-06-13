#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    int mx = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > mx) mx = arr[i];
    }

    int freq[mx + 1] = {0};

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    cout << "Duplicate elements are: ";

    for(int i = 0; i <= mx; i++){
        if(freq[i] > 1){
            cout << i << " ";
        }
    }

    return 0;
}