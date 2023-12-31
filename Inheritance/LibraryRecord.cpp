#include "LibraryRecord.h"

LibraryRecord::LibraryRecord(const vector<Student> &students = {}, const vector<Employee> &employees = {})
    : Students(students), Employees(employees) {}

void LibraryRecord::Add(const Student &s)
{
    Students.push_back(s);
}

void LibraryRecord::Add(const Employee &e)
{
    Employees.push_back(e);
}

const vector<Student> &LibraryRecord::getStudents() const 
{
        return Students; 
}
const vector<Employee> &LibraryRecord::getEmployees() const 
{
        return Employees; 
}
