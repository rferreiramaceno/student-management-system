#ifndef ROSTER_H
#define ROSTER_H


#include <array>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

class Roster
{
	
public:
    Roster();
	Roster(const string a[], int num);
    ~Roster();
	
	
	Student *classRosterArray[5];
		

	void add(string studentI, string firstNam, string lastNam, string emailAddres, int ag, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgra)  {
		(*classRosterArray[2]).setStudentID(studentI);
		(*classRosterArray[2]).setFirstName(firstNam);
		(*classRosterArray[2]).setLastName(lastNam);
		(*classRosterArray[2]).setEmailAddress(emailAddres);
		(*classRosterArray[2]).setAge(ag);
		array<int, 3> daysInCours;
		daysInCours[0] = daysInCourse1;
		daysInCours[1] = daysInCourse2;
		daysInCours[2] = daysInCourse3;
		(*classRosterArray[2]).setDaysInCourse(daysInCours);
		(*classRosterArray[2]).setDegreeProgram(degreeProgra);
	}

	
	void remove(string studentID) {
		int num;
		if(studentID == "A1")
			num = 0;
		else if(studentID == "A2")
			num = 1;
		else if(studentID == "A3")
			num = 2;
		else if(studentID == "A4")
			num = 3;
		else if(studentID == "A5")
			num = 4;
		else
			cout << endl << "A student with ID of " << studentID << "was not found." << endl;
		
		if ((*classRosterArray[num]).getStudentID() == "NoID"){
			cout << endl << "A student with ID of \"" << studentID << "\" was not found." << endl;
		}else {
			delete (classRosterArray[num]);
//			*classRosterArray[num] = *classRosterArray[num+1];
//			*classRosterArray[num] = *classRosterArray[num+2];
//			delete classRosterArray[4];
			classRosterArray[num] = new Student();
		}
		
	}
    
	void printAll(Roster classRoster) {
		for(int i = 0; i < 5; ++i) {
			(*classRoster.classRosterArray[i]).print();
		}
	}
	
	void printAverageDaysInCourse(string studentID) {
		array<int, 3> days;
		int result;
		int num;
		if(studentID == "A1")
			num = 0;
		else if(studentID == "A2")
			num = 1;
		else if(studentID == "A3")
			num = 2;
		else if(studentID == "A4")
			num = 3;
		else
			num = 4;
			
			
		switch(num){
			case 0:
				days = (*classRosterArray[0]).getDaysInCourse();
				
				result = ((days[0] + days[1] + days[2])/3); 
				cout << result << " average days in course." << endl;
				break;
			case 1:
				days = (*classRosterArray[1]).getDaysInCourse();
				
				result = ((days[0] + days[1] + days[2])/3); 
				cout << result << " average days in course." << endl;
				break;
			case 2:
				days = (*classRosterArray[2]).getDaysInCourse();
				
				result = ((days[0] + days[1] + days[2])/3); 
				cout << result << " average days in course." << endl;
				break;
			case 3:
				days = (*classRosterArray[3]).getDaysInCourse();
				
				result = ((days[0] + days[1] + days[2])/3); 
				cout << result << " average days in course." << endl;
				break;
			default:
				days = (*classRosterArray[4]).getDaysInCourse();
				
				result = ((days[0] + days[1] + days[2])/3); 
				cout << result << " average days in course." << endl;
				break;
			
		}

	}
	
	void printInvalidEmails() {
			vector<string> emails;
			
			for(int i = 0; i < 5; ++i) {
				if((*classRosterArray[i]).getEmailAddress().find(' ') != std::string::npos) {
					emails.push_back((*classRosterArray[i]).getEmailAddress());
				}
				if(((*classRosterArray[i]).getEmailAddress().find('@') != std::string::npos) && ((*classRosterArray[i]).getEmailAddress().find('.') != std::string::npos)) {
					
				}else {
					emails.push_back((*classRosterArray[i]).getEmailAddress());
				}
				
			}				
	
			
			cout << endl << "Invalid Emails Found:" << endl;
			for(long long unsigned int i= 0; i < emails.size(); ++i) {
			
			cout << emails[i] << endl;
		}
	
	}


	void printByDegreeProgram(DegreeProgram degreeProgram)  {
		vector<Student> studens;
		
		for(int i = 0; i < 5; ++i) {
			if((*classRosterArray[i]).getDegreeProgram() == degreeProgram){
				studens.push_back((*classRosterArray[i]));
			}
		}

		switch(degreeProgram) {
			case 0:
				cout << endl << "Student(s) doing a " << "SECURITY degree:" << endl;
				break;
			case 1:
				cout << endl << "Student(s) doing a " << "NETWORK degree:" << endl;
				break;
			case 2:
				cout << endl << "Student(s) doing a " << "SOFTWARE degree:" << endl;
				break;
			default:
				return;
			
		}
			
		for(long long unsigned int i= 0; i < studens.size(); ++i) {
			
			studens[i].print();
		}
		
	}
	
};



#endif // ROSTER_H
