/*
          ======================
                 Input
          ======================
    Input allows users to enter data into the program during runtime.

    Input Methods in C++:
    - cin >>     (for basic data types)
    - getline()  (for strings with spaces)
    - get()      (for single characters)
    - ignore()   (to clear input buffer)

    Note: Always handle input carefully to avoid errors
*/

#include <iostream>
using namespace std;
int main()
{
    // Basic input using cin >>
    cout << "=== Basic Input Examples ===" << endl;

    int age;
    float height;
    double salary;
    char grade;
    bool isStudent;

    // Integer input
    cout << "Enter your age: ";
    cin >> age;

    // Float input
    cout << "Enter your height (in feet): ";
    cin >> height;

    // Double input
    cout << "Enter your salary: ";
    cin >> salary;

    // Character input
    cout << "Enter your grade: ";
    cin >> grade;

    // Boolean input (1 for true, 0 for false)
    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> isStudent;

    // Display all entered values
    cout << "\n=== Your Information ===" << endl;
    cout << "Name: " << "sfthanif" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}