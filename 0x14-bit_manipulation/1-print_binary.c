#include "main.h"
/**
 * print_binary - translate number - binary
 * @n: input number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int l, k = 0;
	unsigned long int temp, mask = 0;

	if (n == 0)
		_putchar('0');
	temp = n;

	for (k = 0; temp != 0; k++)/*Ignoring left-zeros*/
		temp = temp >> 1;

	for (l = k - 1; l >= 0; l--)
	{
		mask = 1 << l;/*Creating a mask for extract the digit*/
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

