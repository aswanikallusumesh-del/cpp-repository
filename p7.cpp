#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp[3];

    cout << "Enter details of 3 employees:\n";

    for(int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].input();
    }

    cout << "\n--- Employee Details ---\n";

    for(int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":";
        emp[i].display();
    }

    return 0;
}
