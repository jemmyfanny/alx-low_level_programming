Task 9.txt
Today
07:50

Antony Bahati uploaded an item
Text
Task 9.txt
#include "main.h"

/**
* _strcpy - Copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}
