#include "main.h"
/**
 * print_square - Function to print squares
 * @size: The number of times thge square is printed
 * Return:  nothing
 */
void print_square(int size)
{
	int a, b;
	 if (size > 0)
	 {
		 b = 0;
		 while (b < size)
		 {
		 for (a = 0; a < size; a++)
		 {
			 _putchar(35);
		 }
		 _putchar ('\n');
		 b++;
	 }
	 }
	 else
	 {
		 _putchar('\n');
	 }
}
