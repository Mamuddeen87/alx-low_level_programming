/* print_alphabet_x10 - print the alphabets */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			printf("%d", j);
		}
		putchar('\n');
	}
}
