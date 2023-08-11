#include <stdio.h>
/**
 * main - progra to print single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
