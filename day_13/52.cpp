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

    int even = 0,odd = 0;

    int j = 0;
    while(j<n){
        if(arr[j]%2 == 0) even++;
        else odd++;
        j++;
    }

    cout << "the no of even elements in the entered array is: " << even << endl;
    cout << "the no of odd elements in the entered array is: " << odd << endl;

    return 0;

}