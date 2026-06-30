#include <iostream>
using namespace std;

class Test {
public:
    int x;

    Test(int val) {
        x = val;
    }
};

int main() {

    Test t(25);
    cout << t.x;

    return 0;
}