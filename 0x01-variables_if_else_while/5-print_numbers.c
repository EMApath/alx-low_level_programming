#include <stdio.h>
/**
 * main - print single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar ('\n');

	return (0);
}
