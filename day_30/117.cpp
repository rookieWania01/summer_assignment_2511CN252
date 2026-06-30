#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 10, y = 20;

    swapp(x, y);

    cout << x << " " << y;

    return 0;
}