/*
 * ============================================================================
 * C++OOP  --  Class
 * 
 * Implementation: Ali Moghanni
 * Resources:
 *
 * This cpp file can be obtained at https://github.com/alimoghanni/C++OOP.
 *
 * updated: 2020-04-04
 * ============================================================================
 */

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string fName;
    string lName;
    double pay;
};

int main()
{

    Employee emp1;
    emp1.fName = "Alex";
    emp1.lName = "Kim";
    emp1.pay = 45000;

    cout << "First Name : " << emp1.fName << endl;
    cout << "Last Name : " << emp1.lName << endl;
    cout << "Pay : " << emp1.pay << endl;

    cout << endl;

    Employee emp2;
    emp2.fName = "Jeni";
    emp2.lName = "Tom";
    emp2.pay = 59000;

    cout << "First Name : " << emp2.fName << endl;
    cout << "Last Name : " << emp2.lName << endl;
    cout << "Pay : " << emp2.pay << endl;

    return 0;
}
