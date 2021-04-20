/*
 * ============================================================================
 * Cpp_OOP  --  Encapsulation
 * 
 * Implementation: Ali Moghanni
 * Resources:
 *
 * This cpp file can be obtained at https://github.com/alimoghanni/Cpp_OOP.
 *
 * updated: 2020-04-05
 * ============================================================================
 */

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string fName;
    string lName;
    double pay;
    string email;

public:
    Employee(string empfName, string emplName, double emppay) : fName(empfName), lName(emplName), pay(emppay) {}

    // Member functions:
    void FullName()
    {
        cout << fName << " " << lName << endl;
    }

    // Member functions:
    void GetInfo()
    {
        cout << "First Name : " << fName << endl;
        cout << "Last Name : " << lName << endl;
        cout << "Pay : " << pay << endl;
        cout << "Email : " << SetEmail() << endl;
    }

    void ApplyRaise()
    {
        pay = pay + 100;
    }

    void GetfName()
    {
        cout << "First Name : " << fName << endl;
    }

    void SetfName(string empfName)
    {
        fName = empfName;
    }

    string SetEmail()
    {
        email = fName + "." + lName + "@email.com";
        return email;
    }
};

int main()
{

    Employee emp1("Alex", "Kim", 45000);

    emp1.GetInfo();

    emp1.ApplyRaise();     // change the private pay value
    emp1.SetfName("Nick"); // set the name

    cout << endl;

    emp1.GetInfo();

    emp1.FullName();

    return 0;
}
