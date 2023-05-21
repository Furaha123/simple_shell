#include "shell.h"

/**
 * rev_string - Reverse a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, i, m;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (m = i + 1; m > 0; m--)
		{
		temp = *(str + m);
		*(str + m) = *(str + (m - 1));
		*(str + (m - 1)) = temp;
		}
	}
}

