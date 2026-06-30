#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    string names[n];

    for(int i=0;i<n;i++)
        getline(cin,names[i]);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(names[i]>names[j])
                swap(names[i],names[j]);
        }
    }

    cout<<"Sorted Names:\n";

    for(int i=0;i<n;i++)
        cout<<names[i]<<endl;

    return 0;
}