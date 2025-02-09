#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name, lastName;
    int marks[5];

public:
    Student(string n, string ln, int m[])
    {
        name = n;
        lastName = ln;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }
    void displayMarksheet()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        cout << "Name: " << name << " " << lastName << endl;
        cout << "Maths:     " << marks[0] << "    " << marks[0] << "%" << endl;
        cout << "computers: " << marks[1] << "    " << marks[1] << "%" << endl;
        cout << "English:   " << marks[2] << "    " << marks[2] << "%" << endl;
        cout << "Hindi:     " << marks[3] << "    " << marks[3] << "%" << endl;
        cout << "Physics:   " << marks[4] << "    " << marks[4] << "%" << endl;
        cout << "Total:     " << sum << "   " << sum / 5 << "%" << endl;
    }
};

int main()
{

    /*code*/
    string n, ln;
    cout << "Enter You'r first name: ";
    cin >> n;
    cout << "Enter You'r last name: ";
    cin >> ln;
    int marks[5];
    cout << "Enter you'r marks in maths: ";
    cin >> marks[0];
    cout << "Enter you'r marks in Computers: ";
    cin >> marks[1];
    cout << "Enter you'r marks in English: ";
    cin >> marks[2];
    cout << "Enter you'r marks in Hindi: ";
    cin >> marks[3];
    cout << "Enter you'r marks in physics: ";
    cin >> marks[4];
    Student s1(n, ln, marks);
    s1.displayMarksheet();

    return 0;
}