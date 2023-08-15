#include <stdio.h>
/**
 * main - program to print alphabet in lowercase followed by new line
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	for (int a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
int main(void)
	{
		print_alphabet();
		return (0);
	}
