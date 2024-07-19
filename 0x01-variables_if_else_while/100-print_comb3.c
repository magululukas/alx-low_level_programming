#include <stdio.h>
/**
 * main - prints to the console all possible combinations of two digit figures that are different
 *
 * Return: integer
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return(0);
}


