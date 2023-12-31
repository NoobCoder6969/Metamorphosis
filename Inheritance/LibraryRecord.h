// LibraryRecord.h
#pragma once

#ifndef LIBRARYRECORD_H
#define LIBRARYRECORD_H

#include <iostream>
#include <string>
#include <vector>

#include "Student.h"
#include "Employee.h"

using namespace std;

class LibraryRecord
{
private:
    vector<Student> Students;
    vector<Employee> Employees;

public:
    LibraryRecord(const vector<Student> &students = {}, const vector<Employee> &employees = {});

    void Add(const Student &s);
    void Add(const Employee &e);

    const vector<Student> &getStudents() const;
    const vector<Employee> &getEmployees() const;
};

#endif
