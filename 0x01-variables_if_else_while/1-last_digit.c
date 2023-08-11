#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program to make use of the last digit of n
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	{
	if (last > 5)
	{
		printf("Last digit of %n is %n and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %n is %n and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %n is %n and is less than 6 and not 0", n, last);
	}
	}
	return (0);
}
