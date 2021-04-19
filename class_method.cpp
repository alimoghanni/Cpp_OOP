/*
 * ============================================================================
 * Cpp_OOP  --  Class Method
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

    Employee(string empfName, string emplName, double emppay) : fName(empfName), lName(emplName), pay(emppay)
    {
        email = fName + "." + lName + "@email.com";
    }

    void FullName()
    {
        cout << fName << " " << lName << endl;
    }

    void GetInfo()
    {
        cout << "First Name : " << fName << endl;
        cout << "Last Name : " << lName << endl;
        cout << "Pay : " << pay << endl;
        cout << "Email : " << email << endl;
    }
};

int main()
{

    Employee emp1("Alex", "Kim", 45000);
    Employee emp2("Jeni", "Tom", 59000);

    emp1.GetInfo();

    cout << endl;

    emp2.GetInfo();

    cout << endl;

    emp1.FullName();
    emp2.FullName();

    return 0;
}
