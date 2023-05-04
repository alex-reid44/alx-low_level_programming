#include "main.h"
/**
 * binary_to_uint - translate number to unsigned int
 * @b: points string of 0 and 1
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (p = 0; *(b + p) != '\0'; p++)
	{
		if (*(b + p)  == '1')
			n = (n << 1) | 1;/*insert 1 and make displacement*/
		else if (*(b + p) == '0')
			n <<= 1; /*only displace*/
		else
			return (0);
	}
	return (n);
}
