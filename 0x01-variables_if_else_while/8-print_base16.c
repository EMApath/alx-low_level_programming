#include <stdio.h>
/**
 * main - print nums in base 16
 * Return: 0
 */
int main(void)
{
	int hex;

	for (hex = 48; hex <= 57; hex++)
	{
		putchar(hex);
	}
	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
