#include <stdio.h>
/**
 * main - program to write alphabets in lowecase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
		putchar('\n');
	}
	return (0);
}
