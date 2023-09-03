#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
