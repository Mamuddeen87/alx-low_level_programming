#include <stdio.h>
/**
 * main - program to creat combo
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
		if (m != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
