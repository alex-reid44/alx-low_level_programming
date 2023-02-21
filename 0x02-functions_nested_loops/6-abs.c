#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}

Task 7
vi 7-print_last_digit.c

#include "main.h"
/**
 * print_last_digit-prints the last digit of an interger.
 * @a:number to compute last digit.
 * Return:last digit.
 */



int print_last_digit(int a)
{
	int last_digit;

	last_digit = a %  10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);

}
