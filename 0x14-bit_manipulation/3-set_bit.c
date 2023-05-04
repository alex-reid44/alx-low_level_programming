#include "main.h"
/**
 * set_bit - change to 1 bit of a given index
 * @n: input number
 * @index: input index
 * Return: 1 = working , fails = -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0;

	if (index > 63)
		return (-1);

	m = 1 << index;/*Create  mask to change digit*/
	*n =  *n | m;/*Change bit for 1*/
	return (1);
}
