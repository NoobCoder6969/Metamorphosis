#include "Person.h"

Person::Person(const string &Name = "", const string &ID = "", const string &DOB = "")
    :mName(Name), mID(ID), mDOB(DOB){}

string Person::getName() const
{ 
    return mName;
}
string Person::getID() const 
{ 
    return mID;
}
string Person::getDOB() const
{ 
    return mDOB;
}
