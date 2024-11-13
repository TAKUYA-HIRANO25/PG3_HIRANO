#include "Mario.h"
#include <stdio.h>

Mario::Mario()
{
	name = "Mario";
}

Mario::~Mario()
{

}

void Mario::Drow()
{

	printf("%s\n", name);
}
