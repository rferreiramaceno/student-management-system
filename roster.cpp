#include "roster.h"
#include <array>
#include <string>
#include "student.h"
using namespace std;


//const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Rodrigo,Ferreira,rmaceno3@gmail.com,34,45,36,25,SOFTWARE"};

Student createStudent(const string studenData[0], int num) {
		vector<string> words;
        long long unsigned int counter = 0;
        string word;
		
        int i = 0;
            
        do {
            while( studenData[num][counter] != ',' && counter < studenData[num].length()) {
            word += studenData[num][counter];
            counter++;
            
            }
        
            words.push_back(word);
    
            counter++;
            word ="";
            i++;
        
        }while (i < 9);
        
        Student student1(words);
		return student1;
	}

Roster::Roster()
{
	
	classRosterArray[0] = new Student();
	classRosterArray[1] = new Student();
	classRosterArray[2] = new Student();
	classRosterArray[3] = new Student();
	classRosterArray[4] = new Student();
	
}

Roster::Roster(const string a[], int i)
{
	classRosterArray[0] = new Student();
	classRosterArray[1] = new Student();
	classRosterArray[2] = new Student();
	classRosterArray[3] = new Student();
	classRosterArray[4] = new Student();
	
	*classRosterArray[0] = createStudent(a, i);
	*classRosterArray[1] = createStudent(a, i+1);
	*classRosterArray[2] = createStudent(a, i+2);
	*classRosterArray[3] = createStudent(a, i+3);
	*classRosterArray[4] = createStudent(a, i+4);
	

}

Roster::~Roster()
{
}





	

 
