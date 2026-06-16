#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n){
    int i = 0,j = n-1,temp;
    while(j>i){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
        i++;
    }
    cout << "the reversed array is: ";
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}
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

     rev(arr,n);
    return 0;
}