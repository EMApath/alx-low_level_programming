#include "main.h"
/**
 * print_line - prints a streight line
 * followed by \n
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i <= n ; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
