/*
 * File: 3-set_bit.c
 * Auth: Alex reid
 */
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the pointer of bit
 * @index: the input index
 * Return: if it works 1 if it fails -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 63))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
