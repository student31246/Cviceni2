#include "Beast.h"

int Beast::Eat(Beast *beast,int food)
{
	if (!Live(beast)) return 0;
	GetOlder(beast);
	return beast->stomache += food;
}

int Beast::Poop(Beast *beast,int volume)
{
	if ((beast->stomache -= volume) <= 0)
		beast->stomache = 0;
	return beast->stomache;
}