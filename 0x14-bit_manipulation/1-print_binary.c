/*
 * File: 1-print_binary.c
 * Auth: Alex reid
 */
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The input number
 * return:binary number started by 1
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int temp, mask = 0;

	if (n == 0)
		_putchar('0');
	temp = n;

	for (j = 0; temp != 0; j++)/*Ignore left-zeros*/
		temp = temp >> 1;

	for (i = j - 1; i >= 0; i--)
	{
		mask = 1 << i;/*make a mask for extract the digit*/
		if ((n & mask) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
