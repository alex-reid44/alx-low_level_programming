/*
 * Auth: Alex Reid
 * File: 0-binary_to_uint.c
 */
#include "main.h"
/**
 * binary_to_uint - converts number to unsigned int.
 * @b: binary
 * Return: an unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, mult = 1;
	int len;

	if (b == 0)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		decimal += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (decimal);
}

