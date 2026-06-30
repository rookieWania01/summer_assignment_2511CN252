#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base Class";
    }
};

class B : public A {};

int main() {

    B obj;
    obj.show();

    return 0;
}