#pragma once

enum SubjectType
{
	Math, Literature, Physics, Chemistry, Movie, LazyDay, Drive, English, Spanish, Swimming, History, Czech,
	Biology, Ukranian, Russian, Romanian, Management, Accounting, Science, Geography, Economics, Art

};

enum Mark
{
	A, B, C, D, E, F
};

struct Subject
{
private:
	SubjectType subType;
	int attempts;
	bool credit;
	Mark exam;

public:

	Subject() { attempts = 0; credit = false; exam = Mark::F; }
	Subject(SubjectType type) :Subject() { subType = type; }

	SubjectType GetType(Subject *sub) { return sub->subType; }
	int GetAttempts(Subject *sub) { return sub->attempts; }

	bool GetCredit(Subject *sub) { return sub->credit; }
	void SetCredit(Subject *sub,bool value) { sub->credit = value; }

	Mark GetExam(Subject *sub) { return sub->exam; }
	void SetExam(Subject *sub, Mark mark) { sub->attempts++; sub->exam = mark; }
};