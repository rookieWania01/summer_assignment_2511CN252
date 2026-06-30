#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    int salary;
};

int main() {

    Employee e;

    cin >> e.id;
    cin.ignore();
    getline(cin, e.name);
    cin >> e.salary;

    cout << e.id << " " << e.name << " " << e.salary;

    return 0;
}