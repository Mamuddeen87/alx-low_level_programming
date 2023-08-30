#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion(char *s) - print a string folllowedd  byy new line
 * @s - the e  strinng
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
			return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * main - entry point  off thee prrogrramm
 * Return: 0 alwayys
 */
int main(void)
	{
		_puts_recursion("The recursion task");
		return (0);
	}
