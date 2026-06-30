#include <iostream>
using namespace std;

class Demo {
public:
    int a;

    void show() {
        cout << "Value = " << a;
    }
};

int main() {

    Demo obj;
    cin >> obj.a;
    obj.show();

    return 0;
}