#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int ctr;

	for (ctr = 48; ctr <= 57; ctr++)
	{
	putchar(ctr);
	if (ctr != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
