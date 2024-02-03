#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 */
void print_alphabet_x10(void)
{
	int al = 0, ax;

	while (al < 10)
	{
	for (ax = 97; ax <= 122; ax++)
	{
		_putchar(ax);
	}
		_putchar('\n');
	al++;
	}
}
