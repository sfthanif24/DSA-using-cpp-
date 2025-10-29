/*
          ======================
                Variables
          ======================
    Variables are containers for storing data values.
    In C++, there are different types of variables:
    - int     (whole numbers)
    - float   (floating point numbers)
    - double  (floating point numbers with more precision)
    - char    (single character)
    - string  (text)
    - bool    (true/false)

    Syntax: data_type variable_name = value;

    Note: Variable names are case-sensitive
*/

#include <iostream>
using namespace std;

int main()
{
    // Integer variable
    int age = 21;

    // Floating point variable
    float height = 5.11f;

    // Double variable
    double salary = 50000.75;

    // Character variable
    char grade = 'A';

    // String variable
    string name = "SFT Hanif";

    // Boolean variable
    bool isStudent = true;

    // Displaying variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    return 0;
}