#include "main.h"

/**
 * binary_to_uint - Converts unsigned int
 * @b: points string of 0 and 1 chars
 *
 * Return: If b is 0 or contains chars not 0 or 1 - 0
 *         Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int length;

	if (b == '\0')
		return (0);

	for (lenth = 0; b[lenth];)
		lenth++;

	for (lenth -= 1; lenth >= 0; lenth--)
	{
		if (b[lenth] != '0' && b[lenth] != '1')
			return (0);

		n += (b[lenth] - '0') * m;
		m *= 2;
	}

	return (n);
}
