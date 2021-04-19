/*
 * ============================================================================
 *
 * Ali Moghanni
 *
 *    Copyright (C) 2017 - 2019
 *    Software Engineering Group
 *    Heinz Nixdorf Institute
 *    Paderborn University
 *    philipp.schubert@upb.de
 *
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

    return 0;
}
