#include "main.h"
/**
 * print_line - prints a streight line
 * followed by \n
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
