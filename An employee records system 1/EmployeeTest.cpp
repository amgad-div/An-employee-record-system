// EmployeeTest.cpp
#include <iostream>
#include<string>
#include "Employee.h"
using namespace std;
namespace Records {
int main (int argc, char** argv)
{
cout << "Testing the Employee class." << endl;
Employee emp,A;
emp.setFirstName("Amgad");
emp.setLastName("Nady");
emp.setEmployeeNumber(10);
emp.setSalary(50000);
emp.promote();
emp.promote(50);
emp.hire();
//emp.fire();
emp.display();

system("pause");
return 0;
}
}