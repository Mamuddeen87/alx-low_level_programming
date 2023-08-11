#include <stdio.h>
/**
 * main - program to print digits followed by new linw
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
