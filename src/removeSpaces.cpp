/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int i, j = 0;
	char *noSpaces;

	if(str = "") return '\0';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			noSpaces[j++] = str[i];
	}
}