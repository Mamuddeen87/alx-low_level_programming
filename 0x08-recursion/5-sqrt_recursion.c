#include "main.h"

int test(int a,  int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	return (test(a, b + 1));
}
int _sqrt_recursion(int n)
{
	return (test(n, 0));
}
