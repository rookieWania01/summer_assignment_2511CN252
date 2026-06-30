#include <iostream>
using namespace std;

class Test {
public:
    int x;

    Test() {
        x = 10;
    }
};

int main() {

    Test t;
    cout << t.x;

    return 0;
}