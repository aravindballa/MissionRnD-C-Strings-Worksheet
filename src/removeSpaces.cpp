/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

void RemovePart(char *str, int a, int b)
{
	for (; str[a] != '\0', str[b] != '\0'; a++, b++)
	{
		str[a] = str[b];
	}
}

char removeSpaces(char *str) {
	int i, j;

	if(str == "" || !str) return '\0';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			j = 0;
			while (str[i + j + 1] == ' ') j++;
			RemovePart(str, i, i+j+1);
		}
	}

	i = 0;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')) i++;
	for (; str[i] != '\0'; i++)
		str[i] = '\0';

	return '\0';
}