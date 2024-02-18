#include "main.h"
/**
 * _isupper: Thiis the function to check theuppercase
 * @c: The reference 
 * Return: on success 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
