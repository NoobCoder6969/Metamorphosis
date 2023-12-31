//Person.h
#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
protected:
    string mName;
    string mID;
    string mDOB;
public:
    Person(const string &Name = "", const string &ID = "", const string &DOB = "");

    string getName() const;
    string getID() const;
    string getDOB() const;
};

#endif
