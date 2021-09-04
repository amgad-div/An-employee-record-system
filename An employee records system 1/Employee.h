#pragma once

#ifndef Employee_H
#define Employee_H

#include<string>
using namespace std;
namespace Records {
const int kDefaultStartingSalary = 30000;
class Employee
{
	
public:

	 Employee(void);
	 void promote(int inRaiseAmount = 1000);
	 void demote(int inDemeritAmount = 1000);
	 void hire();          // Hires or rehires the employee
	 void fire();         // Dismisses the employee
	 void display();     // Outputs employee info to the console

 
	 // this funtion of set information of Employee
	void setFirstName(string inFirstName);
	void setLastName(string inLastName);
	void setSalary(int inNewSalary);
	void setEmployeeNumber(int inEmployeeNumber);

	//this functions to get information of Employee
	string getFirstName();
	string getLastName();
	int getEmployeeNumber();
	int getSalary();
	bool getIsHired();

private:
	string mFirstName;
	 string mLastName;
	 int mEmployeeNumber;
	 int mSalary;
	 bool fHired;
	
};
}
#endif