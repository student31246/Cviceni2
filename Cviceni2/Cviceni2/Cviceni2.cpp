#include <iostream>
#include "Beast.h"
#include "Subject.h"
#include "Student.h"

void MySwap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void SortMin(int& a, int& b, int& c)
{
	if (a >= b && a <= c)
		MySwap(a, b);
	else if (a <= b && a >= c)
		MySwap(a, c);
	else if (a >= b && a >= c)
	{
		MySwap(a, c);
		if (a >= b)
			MySwap(a, b);
	}
	else if (b >= c)
		MySwap(b, c);
}

int main()
{
    /*Beast monster;
    monster.Eat(&monster, 10);
    monster.Poop(&monster, 9);
    monster.Print(&monster);*/

	/*Student a;
	a.Enroll(&a,Math);
	a.Enroll(&a, Literature);
	a.Enroll(&a, Physics);
	a.Enroll(&a, Chemistry);
	a.Enroll(&a, Movie);

	a.Score(&a, Math, true);
	a.Score(&a, Physics, true);
	a.Score(&a, Movie, true);

	a.Score(&a, Math, A);
	a.Score(&a, Literature, A);
	a.Score(&a, Physics, A);
	a.Score(&a, Movie, E);

	a.PrintStudentInfo(&a);*/

	//=========================================================================================

	/*int a = 351;
	int b = 690;
	int c = 510;
	
	cout << "Before sort a:" << a << " b:" << b << " c:" << c << endl;
	SortMin(a, b, c);
	cout << "After sort a:" << a << " b:" << b << " c:" << c << endl;*/

	//=========================================================================================

	/*Student a;
	a.Enroll(&a, Math);
	a.Enroll(&a, Literature);
	a.Enroll(&a, Physics);
	a.Enroll(&a, Chemistry);
	a.Enroll(&a, Movie);

	a.Score(&a, Math, true);
	a.Score(&a, Physics, true);
	a.Score(&a, Movie, true);

	a.Score(&a, Math, A);
	a.Score(&a, Literature, A);
	a.Score(&a, Physics, A);
	a.Score(&a, Movie, E);

	Student b(a);
	a.PrintStudentInfo(&a);
	b.PrintStudentInfo(&b);*/

	//=========================================================================================


	/*Beast beast1("Hello");
	beast1.SetName("World");
	beast1.Print(&beast1);

	Student stud1("John");
	cout<< "Student name: " << stud1.GetName() << endl;

	stud1.SetName("Ivan");
	stud1.PrintStudentInfo(&stud1);*/
}