/*
 * ============================================================================
 * Cpp_OOP  --  Class Method
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
    Employee(string empfName, string emplName, double emppay) : fName(empfName), lName(emplName), pay(emppay)
    {
        email = fName + "." + lName + "@email.com";
    }

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
        cout << "Email : " << email << endl;
    }

    void ApplyRaise()
    {
        pay = pay + 100;
    }
};

int main()
{

    Employee emp1("Alex", "Kim", 45000);
    Employee emp2("Jeni", "Tom", 59000);

    

    emp1.GetInfo(); 

    emp1.ApplyRaise();

    cout << endl;

    emp1.GetInfo(); 

    return 0;
}
