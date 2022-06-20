#pragma once
#include <iostream>
#include <list>
#include "Subject.h"
using namespace std;

struct Student
{
	list<Subject> subjects;
	char* name = new char[250];
	void GetMarks(Student *stud);
	void PassedExams(Student *stud);
	const char* AverageMark(Student *stud);

public:
	Student() {};
	Student(const char* nm) { strcpy(this->name, nm); }
	Student(const Student& stud) { this->subjects = stud.subjects; strcpy(this->name, stud.name); };

	char* GetName() { return name; }
	void SetName(const char* nm) { strcpy(this->name, nm); }
	void Enroll(Student *stud, Subject sub);
	void Score(Student *stud, SubjectType subject, bool credit);
	void Score(Student *stud, SubjectType subject, Mark mark);
	void PrintStudentInfo(Student *stud);

	~Student() { delete[] name; }
};

