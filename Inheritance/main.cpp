#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "LibraryRecord.h"

int main()
{
    Student s1("Aneesh Grover", "102320009", "3 August 2005", "Btech First Year", "Computer Science");
    Student s2("Anand Chaudhary", "17302249020", "25 February 2004", "Btech Second Year", "Electronics and Computer Engineering");
    Employee e1("Vijay Kumar", "102320009", "16 August 1982", "Mamu and Teacher");

    LibraryRecord Library;
    Library.Add(s1);
    Library.Add(s2);
    Library.Add(e1);

    cout << "Students:-" << endl;
        for (const auto &student : Library.getStudents())
        {
            cout << "* Name: " << student.getName() << endl << "* ID: " << student.getID() << endl << "* DOB: " << student.getDOB()<< endl
                 << "* Standard: " << student.getStandard() << endl << "* Stream: " << student.getStream() << endl << endl;
        }

        cout << "Employees:-" << endl;
        for (const auto &employee : Library.getEmployees())
        {
            cout << "* Name: " << employee.getName() << endl << "* ID: " << employee.getID() << endl << "* DOB: " << employee.getDOB() << endl
                 << "* Designation: " << employee.getDesignation() << endl << endl;
        }

    return 0;
}
