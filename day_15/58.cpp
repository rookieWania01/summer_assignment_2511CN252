#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int n, int i, int j){
    while(j > i){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
        i++;
    }
}

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "enter array elements: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "no of steps u want to rotate left: ";
    cin >> k;

    k %= n;

    rev(arr, n, 0, k-1);
    rev(arr, n, k, n-1);
    rev(arr, n, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}