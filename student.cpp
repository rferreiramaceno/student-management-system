#include "student.h"
#include "degree.h"
#include <array>
#include <vector>
using namespace std;

DegreeProgram parseDegree(string n) {
    
        DegreeProgram a;
        if (n == "SECURITY") 
            a = SECURITY;
        else if(n == "NETWORK")
            a = NETWORK;
        else if(n == "SOFTWARE")
            a = SOFTWARE;
        else
            a = NOTSET;
        
        return a;
    }
    
array<int, 3> parseDays(string x, string y, string z) {
    array<int, 3> days;
    
    days[0] = std::stoi(x);
    days[1] = std::stoi(y);
    days[2] = std::stoi(z);
    
    return days;
}

Student::Student()
{
    studentID = "NoID";
    firstName = "NoFirstName";
    lastName = "NoLastName";
    emailAddress = "NoEmailAddress";
    age = -1;
    daysInCourse = {0, 0, 0};
    degreeProgram = NOTSET;
}

Student::Student(vector<string> a)
{
    studentID = a[0];
    firstName = a[1];
    lastName = a[2];
    emailAddress = a[3];
    age = std::stoi(a[4]);
    daysInCourse = parseDays(a[5],a[6],a[7]);
    degreeProgram = parseDegree(a[8]) ;
}

Student::~Student()
{
}


