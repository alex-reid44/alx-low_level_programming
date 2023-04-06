/*
 * File: 5-flip_bits.c
 * Auth: Alex reid
 */
#include "main.h"
/**
 * flip_bits - returns the differeces about digits between two numbers.
 * @n: the input number 1
 * @m: input number 2
 * Return: the diferences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
