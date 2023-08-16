void print_to_98(int n)
{
	if (n < 98)
	{
	for (int i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
	}
	else
	{
		for (int i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	return (0);
}
