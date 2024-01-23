#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lowercased alphabet
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	int abc;

	for (abc = 97; abc <= 122; abc++)
	{
		_putchar(abc);
	}

	_putchar('\n');

}
