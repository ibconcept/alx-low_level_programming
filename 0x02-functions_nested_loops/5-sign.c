#include <stdio.h>

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		putchar('0');
		return 0;
	}
	else
	{
		putchar('-');
		return -1;
	}
}

int main()
{
	int n;

	n = 10;
	printf("Sign of %d: %d\n", n, print_sign(n));

	n = 0;
	printf("Sign of %d: %d\n", n, print_sign(n));

	n = -5;
	printf("Sign of %d: %d\n", n, print_sign(n));

	return 0;
}
