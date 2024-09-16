#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * string_toupper - function converts all lowercase letters to upper.
 * @str: its a pointer to the first index of the string.
 * Return: returns a character pointer to the converted string
 */
char *string_toupper(char *str)
{
	int i;
	char *pt = str;

	for (i = 0; *pt != '\0'; i++, pt++)
	{
		if (*pt >= 'a' && *pt <= 'z')
		{
			*pt = *pt - 32;
		}
	}
	return (str);
}
