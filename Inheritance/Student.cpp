#include "Student.h"

Student::Student(const string &Name, const string &ID, const string &DOB, const string &Standard, const string &Stream) 
    : Person(Name, ID, DOB), mStandard(Standard), mStream(Stream){}

string Student::getStandard() const 
{ 
    return mStandard;
}
string Student::getStream() const 
{ 
    return mStream;
}
