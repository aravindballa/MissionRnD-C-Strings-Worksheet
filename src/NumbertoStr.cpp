/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int reverseIt(int num, int *l)
{
	int rev = 0;
	*l = 0;
	while (num > 0)
	{
		rev = 10 * rev + (num % 10);
		num = num / 10;
		*l = *l + 1;
	}

	return rev;
}


void number_to_str(float number, char *str, int afterdecimal){
	int num = 0, reverse, i = 0, isNeg = 0, decAt = 0, j;
	int* pdecAt = &decAt;

	if (number < 0)
	{
		isNeg = 1;
		number = number*(-1);
	}

	if (afterdecimal > 0)
	{
		for (j = 0; j < afterdecimal; j++)
			number *= 10;
	}
	num = (int)number;
	reverse = reverseIt(num, pdecAt);

	decAt -= afterdecimal;

	if (isNeg == 1)
	{
		str[i++] = '-';
		decAt++;
	}
	while (reverse > 0)
	{
		if (i == decAt) str[i++] = '.';

		str[i++] = (reverse % 10) + '0';
		reverse = reverse / 10;
	}

}
