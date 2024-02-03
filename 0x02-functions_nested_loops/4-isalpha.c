#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @alp: charecter to be checked
 * Return: 1 if it is an alphabet U/L and 0 otherwise
 */
int _isalpha(int alp)
{
	if (alp >= 'a' && alp <= 'z')
		return (1);
	else if (alp >= 'A' && alp <= 'Z')
		return (1);
	else
		return (0);

}
