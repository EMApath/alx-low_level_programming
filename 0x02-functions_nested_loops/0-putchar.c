#include <stdio.h>
#include "main.h"
/**
 * main - prints a string
 * Return: 0
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 80; i++)
	{
		if (s[i] == '\0')
		{	
			_putchar('\n');
			break;
		}
		else
		{
		_putchar(s[i]);
		}
	}

	return (0);
}
