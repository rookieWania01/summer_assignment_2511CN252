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

    int sum;
    cout << "enter sum of pair: ";;
    cin >> sum;

    int count = 0;

    for(int i = 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == sum){
                count++;
                cout << "element at index " << i << "and " << j << "have given sum";
            }
        }
    }

    cout << "Total pairs = " << count;

    return 0;
}