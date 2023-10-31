#include "main.h"
/**
 * main - checks if the value is a digit
 * it returns 1 if adigit and 0 if otherwise
 */
 int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
