#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {1,2,3,4};

    v.push_back(5);

    for(int i : v)
        cout << i << " ";

    return 0;
}