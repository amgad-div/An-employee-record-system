#include "Database.h"
#include "Employee.h"
#include <stdexcept>
#include<iostream>
#include<string>
using namespace std;
namespace Records {
Database::Database(void)
{
	mNextSlot = 0;
	mNextEmployeeNumber = kFirstEmployeeNumber;
}


Database::~Database(void)
{
}

Employee Database::addEmployee(string inFirstName, string inLastName)
{
		if (mNextSlot >= kMaxEmployees) 
		{
		   cout << "There is no more room to add the new employee!" << endl;
		}

		Employee& theEmployee = mEmployees[mNextSlot++];
		theEmployee.setFirstName(inFirstName);
		theEmployee.setLastName(inLastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.hire();
		return theEmployee;
}

Employee Database::getEmployee(int inEmployeeNumber)
{
		for (int i = 0; i < mNextSlot; i++)
		{
			if (mEmployees[i].getEmployeeNumber() == inEmployeeNumber) 
			{
			    return mEmployees[i];	
			}
		}
	cout << "No employee with employee number" << inEmployeeNumber << endl;
}

Employee Database::getEmployee(string inFirstName, string inLastName)
{
		for (int i = 0; i < mNextSlot; i++) 
		{
			if (mEmployees[i].getFirstName() == inFirstName &&
			mEmployees[i].getLastName() == inLastName)
			{
			return mEmployees[i];
			}
		}
		cout << "No match with name " << inFirstName << " " << inLastName << endl;

}


void Database::displayAll()
{
	for (int i = 0; i < mNextSlot; i++) 
	{
	mEmployees[i].display();
	}
}
void Database::displayFormer()
{
	for (int i = 0; i < mNextSlot; i++) 
	{
		if (!mEmployees[i].getIsHired())
		{
		mEmployees[i].display();
		}
	}
}

}