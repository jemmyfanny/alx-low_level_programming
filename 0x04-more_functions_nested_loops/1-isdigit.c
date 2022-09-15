#include "main.h"

/**
 * _isdigit - checks for a digit through 0 and 9
 * @c: tested character
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
