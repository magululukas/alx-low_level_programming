/**
 * main - Start point
 *
 * printf - Printing out values of sizeof
 *
 * Return: zero always
 */
#include <stdio.h>
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float e;
        printf("Size of a char: %d byte(s)\n", sizeof a);
	printf("Size of an int: %d byte(s)\n", sizeof b);
	printf("Size of a long int: %1d byte(s)\n", sizeof c);
	printf("Size of a long long int: %1u byte(s)\n", sizeof d);
	printf("Size of a float: %1u byte(s)\n", sizeof e);
	return (0);
}
