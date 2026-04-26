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
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp[100];
    int count = 0;
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All\n";
        cout << "3. Search by ID\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                if(count < 100) {
                    cout << "\nEnter Employee Details:\n";
                    emp[count].input();
                    count++;
                } else {
                    cout << "Employee list is full!\n";
                }
                break;
            }

            case 2: {
                if(count == 0) {
                    cout << "No employees to display.\n";
                } else {
                    cout << "\nEmployee List:\n";
                    for(int i = 0; i < count; i++) {
                        emp[i].display();
                    }
                }
                break;
            }

            case 3: {
                int searchId, found = 0;
                cout << "Enter ID to search: ";
                cin >> searchId;

                for(int i = 0; i < count; i++) {
                    if(emp[i].id == searchId) {
                        cout << "Employee Found:\n";
                        emp[i].display();
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    cout << "Employee not found.\n";
                }
                break;
            }

            case 4: {
                int deleteId, found = 0;
                cout << "Enter ID to delete: ";
                cin >> deleteId;

                for(int i = 0; i < count; i++) {
                    if(emp[i].id == deleteId) {
                        for(int j = i; j < count - 1; j++) {
                            emp[j] = emp[j + 1];
                        }
                        count--;
                        cout << "Employee deleted.\n";
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    cout << "Employee not found.\n";
                }
                break;
            }

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}
