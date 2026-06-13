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

    int max = INT_MIN;
    int smax;
    int j = 0;
    while(j<n){
        if(arr[j]>max){
            smax = max;
            max = arr[j];
        }
        j++;
    }

    cout << "the second max elemnt is: " << smax;

    return 0;
}