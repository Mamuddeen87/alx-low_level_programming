#include <stdio.h>
#include "function_pointers.h"

int main(void)
{
	printf("%s", *print_name.name);
	return (0);
}
