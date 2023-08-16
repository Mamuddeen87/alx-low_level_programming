/*
 * print_sign - function that prints sign of integers
 * Description: it returns 0 if it is equal to zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(0);
		return (1);
	}
	if (n == 0)
	{
		putchar(0);
		return (0);
	}
	putchar(-);
	putchar(1);
	return (-1);
}
