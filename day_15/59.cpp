#include<bits/stdc++.h>
using namespace std;

int rev(int arr[],int n,int i,int j){
    int temp;
    while(j>i){
        temp = arr[i];
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

    int i = 0;
    while(i < n){
        cin >> arr[i];
        i++;
    }

    int k;
    cout << "no of steps u want to rotate right: ";
    cin >> k;

    k = k%n;

    rev(arr,n,0,n-1);
    rev(arr,n,0,k-1);
    rev(arr,n,k,n-1);

    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }

}
