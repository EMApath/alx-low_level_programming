#include "main.h"
/**
 * _isupper - checks for upper and lowercase character
 *
 * @c: charectar to be checked
 * Return: 1 for uppercase , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
