#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - func copies src strng to dest
 * @dest: its the first string
 * @src: its the second string
 * @n: copying up to n bytes
 * Return: modified string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];/*this statement is the one that copies characters*/
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
