#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "enter array elements: ";

    int i = 0;
    while(i < n){
        cin >> arr[i];
        i++;
    }

    int mx = INT_MIN;
    int j = 0;
    while(j < n){
        if(arr[j] > mx) mx = arr[j];
        j++;
    }

    int freqarr[mx + 1] = {0};

    int k = 0;
    while(k < n){
        freqarr[arr[k]]++;
        k++;
    }

    int nf;
    cout << "enter no whose freq is to be found: ";
    cin >> nf;
    cout << "freq is: " << freqarr[nf];

    return 0;
}