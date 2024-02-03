#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @pnum: number to print the sign of
 * Return: 0 if successfull
 */
int print_sign(int pnum)
{
	if (pnum > '0')
	{
		_putchar('+');
		return (1);
	}
	else
		if (pnum == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		if (pnum < '0')
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
