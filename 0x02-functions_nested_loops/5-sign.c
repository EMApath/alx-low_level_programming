#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @pnum: number to print the sign of
 * Return: 1 if +ve number, -1 for -ve num or zero otherwise
 */
int print_sign(int pnum)
{
	if (pnum > 0)
	{
		_putchar(43);
		return (1);
	}
	else
		if (pnum < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
