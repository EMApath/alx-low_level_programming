#include <stdio.h>
/**
 * main - prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 122; rev >= 97; rev--)
		putchar(rev);

	putchar('\n');
	return (0);
}
