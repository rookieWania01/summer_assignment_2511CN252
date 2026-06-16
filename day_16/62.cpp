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

    int maxf = 0;
    int maxel = -1;

    int l = 0;
    while(l <= mx){
        if(freqarr[l] > maxf){
            maxf = freqarr[l];
            maxel = l;
        }
        l++;
    }

    cout << "the max freq element is: " << maxel  << " with frequency: " << maxf;

    return 0;
}