#include "Employee.h"

Employee::Employee(const string &Name, const string &ID, const string &DOB, const string &Designation) 
    : Person (Name, ID, DOB), mDesignation(Designation){}

string Employee::getDesignation() const 
{ 
    return mDesignation;
}

