/*
 * File: 2-get_bit.c
 * Auth: Alex reid
 */
#include "main.h"
/**
 * get_bit - get the bit of a given index.
 * @n: the bit
 * @index: the input index
 * Return: 0 or 1 if failure -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
