#include "main.h"
/**
 * get_endianness - defines if pc is big / little endianness
 * Return: 0 = big, 1= little
 */
int get_endianness(void)
{
	int l = 1;

	if ((l >> 31) == 1)
		return (0);
	else
		return (1);
}

