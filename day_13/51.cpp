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

    int lgt = INT_MIN,smt = INT_MAX;

    int j = 0;
    while(j<n){
        if(arr[j]>lgt) lgt = arr[j];
        if(arr[j]<smt) smt = arr[j];
        j++;
    }

    cout << "the largest element of the entered array is: " << lgt << endl;
    cout << "the smallest element of the entered array is: " << smt << endl;

    return 0;

}