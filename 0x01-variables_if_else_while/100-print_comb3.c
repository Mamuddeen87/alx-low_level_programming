#include <stdio.h>
/**
 * main - program to creat combo
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
		for (n = 0; n <= 9; n++)
		{
			if (m != n)
			{
				putchar(m);
				putchar(n);
				if (m == 9 && n == 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
