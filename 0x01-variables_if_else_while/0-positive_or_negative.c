#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - function determine if n is negative or positive
 *
 *  Return: 0 for success
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("please enter number: ");
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
