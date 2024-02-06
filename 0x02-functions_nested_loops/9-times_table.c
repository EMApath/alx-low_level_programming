#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 * @i, @n: numbers to multiply
 * m: multiplication result
 * fd: first digit of number of two digits
 * ld: last digit of number of teo digits
 */
void times_table(void)
{
	int i, n, m, fd, ld;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = n * i;

			if (m > 9)
			{
			ld = (m % 10);
			fd = (m - ld) / 10;

			_putchar(',');
			_putchar(' ');
			_putchar(fd + '0');
			_putchar(ld + '0');
			}
		else
		{
			if (i != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar(m + '0');
		}
	}
	_putchar('\n');
	}
}
