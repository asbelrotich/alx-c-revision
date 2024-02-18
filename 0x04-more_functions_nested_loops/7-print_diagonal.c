#include "main.h"
/**
 * print_diagnol - To print the diagnol lines
 * @n: The number of diagnol lines
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a  = 0; a < n; a++)
		{
			for(b = 0; b < a; b++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
