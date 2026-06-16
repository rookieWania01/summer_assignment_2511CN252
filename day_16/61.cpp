#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n-1],sum = 0;

    cout << "enter array elements: ";

    int i = 0;
    while(i<n-1){
        cin >> arr[i];
        sum += arr[i];
        i++;
    }

    int totalsum = n*(n+1)/2;

    cout << "missing no is: " << totalsum - sum;

    return 0;
}