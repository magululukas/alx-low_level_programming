#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - function reverses the contents of an integer array.
 * @a: its a pointer to the integer array
 * @n: its the length of the integer array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
