#include "main.h"

/**
* get_endianness - function checks the endianness
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *s;

	s = (char *) &x;

	return (*s);
}

