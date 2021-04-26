/*
 * ============================================================================
 * Cpp_OOP  --  Multilevel Inheritance
 * 
 * Implementation: Ali Moghanni
 * Resources:
 *
 * This cpp file can be obtained at https://github.com/alimoghanni/Cpp_OOP.
 *
 * updated: 2020-05-12
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
    double raise_amount = 1.04;

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
        pay = pay * raise_amount;
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

class Developer : public Employee
{
public:
    Developer(string devfName, string devlName, double devpay) : Employee(devfName, devlName, devpay) {}
};

class CPPDeveloper : public Developer
{
public:
    CPPDeveloper(string cdevfName, string cdevlName, double cdevpay) : Developer(cdevfName, cdevlName, cdevpay) {}
};

int main()
{

    Developer dev1("Alex", "Kim", 45000);

    dev1.GetInfo();
    dev1.FullName();

    cout << endl;

    dev1.ApplyRaise(); // change the private pay value

    dev1.GetInfo();

    return 0;
}
