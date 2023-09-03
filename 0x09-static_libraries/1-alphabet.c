#include "main.h"
/**
 * main - a program that prints alphabet in lowwercase
 *
 * Return: Always 0.
 */
/* print_alphabet - prints the alphabets*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
