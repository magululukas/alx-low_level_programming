#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers from 0- 100
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0 || a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	if (a < 100)
	{
		putchar(' ');
	}
	printf("\n");
	return (0);
}

