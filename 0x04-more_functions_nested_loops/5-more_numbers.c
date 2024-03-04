#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 - 14
 */

void more_numbers(void)
{
	int i, b;

	b = 0;

	while (b < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

		}
	b++;
	_putchar('\n');
	}
}
