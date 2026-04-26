#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];


    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Enter ID: ";
        cin >> s[i].id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    cout << "\nStudent with Highest Marks:\n";
    cout << "ID: " << s[maxIndex].id << endl;
    cout << "Name: " << s[maxIndex].name << endl;
    cout << "Marks: " << s[maxIndex].marks << endl;

    return 0;
}
