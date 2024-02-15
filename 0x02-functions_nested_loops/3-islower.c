#include "main.h"
/**
 * _islower - used to check for lowercase character
 * return 0 always
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
