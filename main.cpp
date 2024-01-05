#include <iostream>
#include "student.h"
#include "roster.h"
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Course Title: \t                                               " << endl;
    cout << "Prog Language: \tC++" << endl;
    cout << "My WGU ID: \t         " << endl;
    cout << "Name: \t\tRodrigo Ferreira Maceno" << endl;
    
    cout << endl;
    
	const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Rodrigo,Ferreira,rmaceno3@gmail.com,34,45,36,25,SOFTWARE"};

	Roster* classRoster = new Roster(studentData, 0);
	//Roster* classRoster = new Roster; 
	
	
	// ????????????
	//(*classRoster).add("A3", "Rodrigo", "Ferreira", "rmaceno3@gmail.com", 34, 45, 36, 25, SOFTWARE);
	

	(*classRoster).printAll(*classRoster);	
//	(*(*classRoster).classRosterArray[2]).print();  // WORKS
	
	// print Invalid Emails
	(*classRoster).printInvalidEmails();

	
	cout << endl;
	

	cout << "Average Days Left in Course:" << endl;
	for(int i = 0; i < 5; ++i) {
		(*classRoster).printAverageDaysInCourse((*(*classRoster).classRosterArray[i]).getStudentID());
	}

	
	(*classRoster).printByDegreeProgram(SOFTWARE);
	
	
	(*classRoster).remove("A3");
	

	cout << endl << "After Removing:" << endl;
	

	(*classRoster).printAll(*classRoster); // AGAIN
	
	
	(*classRoster).remove("A3");

	
	delete classRoster;
	
	return 0;
}
