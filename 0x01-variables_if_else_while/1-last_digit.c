#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number
 * Return: 0 for success
 * betty style doc for function main goes there
 */
int main(void)
{
	int n, LD;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	LD = n % 10;
	if (LD > 5 )
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	if (LD == 0)
		printf("Last digit of %d is %d and is 0\n", n, LD);
	if (LD < 6 && LD != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	return (0);
}
