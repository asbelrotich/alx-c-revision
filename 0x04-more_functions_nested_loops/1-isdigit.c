#include "main.h"
/**
 * _isdigit: used to check if the digit
 * @c: This is tereferncevariable
 * Return: 1 on succes
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
