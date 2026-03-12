#include <iostream>
using namespace std;
class Student {
protected:
    int roll;
    string name;
public:
    void get() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }
    void show() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
class Result : public Student {
private:
    int m1, m2, m3;
    int total;
    float average;
public:
    void getMarks() {
        get();
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
        total = m1 + m2 + m3;
        average = total / 3.0;
    }
    void showResult() {
        show
		();
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};
int main() {
    Result r;
    r.getMarks();
    cout << "\nStudent Result\n";
    r.showResult();
    return 0;
}