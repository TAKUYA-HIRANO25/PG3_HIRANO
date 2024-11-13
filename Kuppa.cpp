#include "Kuppa.h"
#include <stdio.h>

Kuppa::Kuppa() 
{
	name = "Kuppa";
}

Kuppa::~Kuppa()
{

}

void Kuppa::Drow()
{
	printf("%s\n", name);
}
