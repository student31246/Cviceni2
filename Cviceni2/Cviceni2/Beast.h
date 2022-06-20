#pragma once
#include <iostream>
using namespace std;

struct Beast
{
private:
	int stomache;
	int age;
	char* name = new char[250];
	int Live(Beast* beast) { return beast->stomache > 0; }
	void GetOlder(Beast* beast) { beast->age++; }

public:
	Beast() { stomache = 1; age = 0; }
	Beast(const char* nm) :Beast() { strcpy(this->name, nm); }
	Beast(const Beast& bst) { this->stomache = bst.stomache; this->age = bst.age; }
	
	char* GetName() { return name; }
	void SetName(const char* nm) { strcpy(this->name, nm); }
	int Eat(Beast *beast,int food);
	int Poop(Beast *beast,int volume);	
	void Print(Beast* beast) { cout << "Age: " << beast->age << " " << "Stomache: " << beast->stomache << " Name: " << beast->GetName() << endl; }

	~Beast() { delete[] name; }
};


