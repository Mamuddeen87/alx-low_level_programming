#include <stdio.h>
/**
 * main - program to print possible combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j != k)
				{
					printf("%d%d%d", i, j, k);
					if (i != 7)
						printf(", ");
				}
			}
	}
	putchar('\n');
	return (0);
}
