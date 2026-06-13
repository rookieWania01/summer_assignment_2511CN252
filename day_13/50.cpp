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

    int sum = 0;
    int j = 0;
    while(j<n){
        sum+=arr[j];
        j++;
    }

    cout << "the sum of the entered array is: " << sum << endl;
    cout << "the average of the entered array is: " << sum/n;

    return 0;

}