/*
 * ============================================================================
 * Cpp_OOP  --  Constructor
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
public:
    string fName;
    string lName;
    double pay;
    string email;

    // constructor
    Employee(string empfName, string emplName, double emppay) : fName(empfName), lName(emplName), pay(emppay) {}
};

int main()
{

    Employee emp1("Alex", "Kim", 45000);
    emp1.email = "Alex.Kim@email.com";

    Employee emp2("Jeni", "Tom", 59000);
    emp2.email = "Jeni.Tom@email.com";

    cout << "First Name : " << emp1.fName << endl;
    cout << "Last Name : " << emp1.lName << endl;
    cout << "Pay : " << emp1.pay << endl;
    cout << "Email : " << emp1.email << endl;

    cout << endl;

    cout << "First Name : " << emp2.fName << endl;
    cout << "Last Name : " << emp2.lName << endl;
    cout << "Pay : " << emp2.pay << endl;
    cout << "email : " << emp2.email << endl;

    return 0;
}
