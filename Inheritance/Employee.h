//Employee.h

#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <vector>

#include "Person.h"

using namespace std;

class Employee: public Person
{
    private:
        string mDesignation;

    public:
        Employee(const string &Name, const string &ID, const string &DOB, const string &Designation); 
           

        string getDesignation() const; 
        

};

#endif
