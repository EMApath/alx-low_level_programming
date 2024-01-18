#include <stdio.h>
/**
 * main - print alphabets except q & e
 * Return: 0
 */
int main(void)
{
	char ctr;

	for (ctr = 97; ctr <= 122; ctr++)
	{
	if (ctr != 101 && ctr != 113)
	{
		putchar(ctr);
	}
	}
	putchar('\n');

	return (0);
}
