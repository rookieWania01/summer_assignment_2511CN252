#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("data.txt");

    file << "Hello World";

    file.close();

    cout << "Written Successfully";

    return 0;
}