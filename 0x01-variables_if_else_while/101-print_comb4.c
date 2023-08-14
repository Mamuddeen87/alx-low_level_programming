#include <stdio.h>
/**
 * main - program to print possible combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
			for (k = 1; k < 10; k++)
			{
				if (i != j != k)
				{
					printf("%d %d %d", i, j, k);
					if (i != 9 || j != 9 || k != 9)
						printf(", ");
				}
			}
	}
	putchar('\n');
	return (0);
}
