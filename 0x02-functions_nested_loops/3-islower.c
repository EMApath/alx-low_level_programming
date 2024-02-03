#include "main.h"
/**
 * _islower - checks for lowercase charecter.
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int chl)
{
	if (chl >= 'a' && chl <= 'z')
		return (1);
	else
		return (0);
}
