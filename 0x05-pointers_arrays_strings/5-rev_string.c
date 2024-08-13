#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - function reverses a sring
 * @s: its a pointer
 */
void rev_string(char *s)
{
	int a, c;
	char b;

	c = strlen(s) - 1;
	for (a = 0; a < c; a++, c--)
	{
		b = s[a];
		s[a] = s[c];
		s[c] = b;
	}
}
