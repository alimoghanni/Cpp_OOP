/*
 * ============================================================================
 * Cpp_OOP  --  Class
 * 
 * Implementation: Ali Moghanni
 * Resources:
 *
 * This cpp file can be obtained at https://github.com/alimoghanni/Cpp_OOP.
 *
 * updated: 2020-04-04
 * ============================================================================
 */

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    // Member attributes:
public:
    string fName;
    string lName;
    double pay;
    string email;
};

int main()
{

    // An object of class Employee with attribute fName as "Alex"
    Employee emp1;
    emp1.fName = "Alex";
    emp1.lName = "Kim";
    emp1.pay = 45000;
    emp1.email = "Alex.Kim@email.com";

    cout << "First Name : " << emp1.fName << endl;
    cout << "Last Name : " << emp1.lName << endl;
    cout << "Pay : " << emp1.pay << endl;
    cout << "Email : " << emp1.email << endl;

    cout << endl;

    Employee emp2;
    emp2.fName = "Jeni";
    emp2.lName = "Tom";
    emp2.pay = 59000;
    emp2.email = "Jeni.Tom@email.com";

    cout << "First Name : " << emp2.fName << endl;
    cout << "Last Name : " << emp2.lName << endl;
    cout << "Pay : " << emp2.pay << endl;
    cout << "email : " << emp2.email << endl;

    return 0;
}
