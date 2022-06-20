#include "Student.h"
#include <algorithm>
#include "SubjectExtensions.h"
using namespace std;

void Student::Enroll(Student *stud, Subject sub)
{
	if (stud->subjects.size() < 20)
	{
		for (Subject elem : stud->subjects)
			if (elem.GetType(&elem) == sub.GetType(&sub))
			{
				cout << "you have already assigned to this subject" << endl;
				return;
			}
		stud->subjects.push_back(sub);
	}
	else
		cout << "Over the subject limit" << endl;
}

void Student::Score(Student *stud, SubjectType subjectT, bool credit)
{
	bool found = false;
	for (Subject& elem : stud->subjects)
	{
		if (elem.GetType(&elem) == subjectT)
		{
			elem.SetCredit(&elem, credit);
			found = true;
			break;
		}
	}
	if (!found)
		cout << "Such subject not assigned" << endl;
}

void Student::Score(Student *stud, SubjectType subjectT, Mark mark)
{
	bool found = false;
	bool allowed = true;
	for (Subject& elem : stud->subjects)
	{
		if (elem.GetType(&elem) == subjectT)
		{
			found = true;

			if (elem.GetCredit(&elem) && elem.GetAttempts(&elem) < 3)
				elem.SetExam(&elem, mark);
			else
				allowed = false;
			break;
		}
	}
	if (!found)
		cout << "Such subject not assigned" << endl;
	if (!allowed)
		cout << "student is not allowed to pass the exam" << endl;
}

void Student::GetMarks(Student *stud)
{
	for (Subject sub : stud->subjects)
		cout << "Subject name: " << SubjectExtensions::subjectTypeText[sub.GetType(&sub)] << " - " << SubjectExtensions::subjectMarkText[sub.GetExam(&sub)] << endl;
}

void Student::PassedExams(Student *stud)
{
	int passedCount = 0;
	for (Subject sub : stud->subjects)
		if (sub.GetExam(&sub) >= 0 && sub.GetExam(&sub) < 3)
		{
			cout << "Subject name: " << SubjectExtensions::subjectTypeText[sub.GetType(&sub)] << " - " << SubjectExtensions::subjectMarkText[sub.GetExam(&sub)] << endl;
			passedCount++;
		}
	cout << "Total successfully pased subjects: " << passedCount << endl;
}

const char* Student::AverageMark(Student *stud)
{
	double total = 0;
	for (Subject sub : stud->subjects)
		total += sub.GetExam(&sub);
	return SubjectExtensions::subjectMarkText[(int)round(total / subjects.size())];
}

void Student::PrintStudentInfo(Student *stud)
{
	char decision;
	cout<<"Student name is: "<<stud->GetName()<<"\n" << "Enter 1 - for getting marks, 2 - to get passed exams, 3 - to get average marks" << endl;
	cin >> decision;
	switch (decision)
	{
	case '1':
		stud->GetMarks(stud);
		break;
	case'2':
		stud->PassedExams(stud);
		break;
	case'3':
		cout << "Average mark is: " << stud->AverageMark(stud) << endl;
		break;
	default:
		break;
	}
}