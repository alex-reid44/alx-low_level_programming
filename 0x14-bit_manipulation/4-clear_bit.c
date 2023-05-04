#include "main.h"
/**
 * clear_bit - change to 0 bit of a given index
 * @n: input number
 * @index: input index
 * Return: 1 = working ,fails = -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 0;

	if (index > 63)
		return (-1);

	m = 1 << index;/*Creating mask to change digit*/
	m = ~m; /*switch 0 to 1 using 1 complement*/
	*n =  *n & m;/*Change bit for 1*/
	return (1);
}
