#include <stdio.h>
#include "main.h"
/**
 * _strcmp - func compares two strings character by character
 * @s1: first string
 * @s2:second string
 * Return: returns the ancii difference btn the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int n, a;

	for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
	{
		if (*s1 != *s2)
		{
			a = *s1 - *s2;
		}
		else
		{
			a = 0;
		}
	}
	return (a);
}
