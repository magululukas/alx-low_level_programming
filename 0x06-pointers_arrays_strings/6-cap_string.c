#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
/**
 * cap_string - function captitalises all strings but first letters only.
 * @str: its a pointer to the gen string
 * Return: modified string
 */
char *cap_string(char *str)
{
	int cap = TRUE;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap = TRUE;
		}
		else if (cap && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			cap = FALSE;
		}
		else
		{
			cap = FALSE;
		}
	}
	return (str);
}
