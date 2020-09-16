#include "divisible.h"

int divisible(int number1, int number2)
{
	if(number2==0)
		return -1;
	else
	{
		if((number1%number2)==0)
			return 1;
		else
			return 0;
	}
}
