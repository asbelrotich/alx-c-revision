#include "main.h"
/**
 * print_times_table - function to print the times table
 * @n: The value to check
 * return 0
 */
void print_times_table(int n)
{
	int a, b, c;
	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 0; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;
				if (c <= 99)
				{
					_putchar(' ');
				}
				if (c <= 9)
					_putchar(' ');
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10)) % 10 + '0');
				}
					else if (c <= 99 && c >= 10)
				{
					_putchar((c / 10) + '0');
				}
					_putchar((c % 10) + '0');
				}
			_putchar('\n');
			}
	}
}
