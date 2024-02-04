#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @num: number to print the last digit of
 * Return: 0
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	_putchar(ld);

	return (0);
}
