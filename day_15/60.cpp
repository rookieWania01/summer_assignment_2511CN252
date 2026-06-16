#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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

    for(int i = 0,j=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr,i,j);
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}