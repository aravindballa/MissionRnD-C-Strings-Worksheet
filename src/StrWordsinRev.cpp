/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void ReverseThis(char *input, int st, int ed)
{
	char c;
	while (st < ed)
	{
		c = input[st];
		input[st] = input[ed];
		input[ed] = c;
		st++; ed--;
	}
}

int FindIt(char *input, char k, int from)
{
	int i;
	for (i = from; input[i] != '\0'; i++)
	{
		if (input[i] == k) return i;
	}

	return i;
}

void str_words_in_rev(char *input, int len){

	int start = 0, end = len - 1, spaceAt = 0;

	ReverseThis(input, start, end);

	for (start = 0; start < len; start = spaceAt + 1)
	{
		spaceAt = FindIt(input, ' ', start);
		ReverseThis(input, start, spaceAt - 1);
	}
}
