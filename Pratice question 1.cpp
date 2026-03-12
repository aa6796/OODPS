#include <iostream>
using namespace std;
class Employee {
protected:
    int empID;
    string empName;
public:
    void get() {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> empName;
    }
    void show() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
    }
};
class Manager : public Employee {
private:
    string department;
    float salary;
public:
    void getManager() {
        get();   
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void showManager() {
        show(); 
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    Manager m;
    cout << "Enter Manager Details\n";
    m.getManager();
    cout << "\nManager Details\n";
    m.showManager();
    return 0;
}