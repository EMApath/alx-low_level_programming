#include "main.h"
/**
 * _abs -  computes the absolute value of an integer.
 * @ab: integer to be computed
 * Return: absolute value of number Always
 */
int _abs(int ab)
{
	if (ab > 0)
	{
		return (ab);
	}
	else
		if (ab < 0)
		{
			ab = (-1) * ab;
		}
	return (ab);
}
