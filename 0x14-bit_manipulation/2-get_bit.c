#include "main.h"
/**
 * get_bit - get bit of given index
 * @n: input number
 * @index: input index
 * Return: 0 or 1 if failure -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 0;
	int d;

	if (index > 63)
		return (-1);

	m = 1 << index;/*Creating mask for extract the digit*/
	d = (n & m) >> index;/*Extract digit the push to 0 or 1*/
	return (d);
}
