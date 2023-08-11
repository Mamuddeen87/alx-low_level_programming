#include <stdio.h>
/**
 * main - program to print numbers of base 16
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n, m;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
