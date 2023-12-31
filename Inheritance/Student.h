//Student.h

#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

#include "Person.h"

using namespace std;

class Student: public Person
{
    private:
        string mStandard;
        string mStream;
    public:
        Student(const string &Name, const string &ID, const string &DOB, const string &Standard, const string &Stream);
            

        string getStandard() const; 
        
        string getStream() const; 
        
};

#endif
