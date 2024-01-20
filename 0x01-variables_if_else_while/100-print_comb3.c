#include <stdio.h>
/**
 * main - print combinations of two digits
 * Return: 0
 */

int main(void)
{
	int comb1, comb2;

	for (comb1 = 48; comb1 < 57; comb1++)
	{
	for (comb2 = comb1 + 1; comb2 <= 57; comb2++)
	{
		if (comb2 != comb1)
		{
		putchar(comb1);
		putchar(comb2);
		if (comb1 == 56 && comb2 == 57)
		continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
