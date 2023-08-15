#include <stdio.h>
#include <unistd.h>
/**
 * main - program to print 10 times the alphabet
 *
 * return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
