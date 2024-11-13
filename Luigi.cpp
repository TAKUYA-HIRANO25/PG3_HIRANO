#include "Luigi.h"
#include <stdio.h>

Luigi::Luigi()
{
	name = "Luigi";
}

Luigi::~Luigi()
{

}

void Luigi::Drow()
{
	printf("%s\n", name);
}
