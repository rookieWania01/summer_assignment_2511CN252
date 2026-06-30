#include <iostream>
using namespace std;

class Calc {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {

    Calc c;
    cout << c.add(2,3) << endl;
    cout << c.add(1,2,3);

    return 0;
}