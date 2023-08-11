#include <stdio.h>
/**
 * main - program to print alphabets in lowercase and then in upper chase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lower, upper;

		for (lower = 'a'; lower <= 'z'; lower++)
		{
			putchar(lower);
		}
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			putchar(upper);
		}
		putchar('\n');

	return (0);
}
