#pragma once
#include "Employee.h"
#include <stdexcept>
#include<string>
using namespace std;
namespace Records {

const int kMaxEmployees = 100;
const int kFirstEmployeeNumber = 1000;
class Database:public Employee
{
protected:

  Employee mEmployees[kMaxEmployees];
  int mNextSlot;
  int mNextEmployeeNumber;

public:
	Database(void);

	~Database(void);
	void displayAll();
    void displayCurrent();
    void displayFormer();
	Employee addEmployee(string inFirstName, string inLastName);
    Employee getEmployee(int inEmployeeNumber);
    Employee getEmployee(string inFirstName, string inLastName);
};

}