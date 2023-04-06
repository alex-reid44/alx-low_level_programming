/*
 * File: 100-get_endianness.c
 * Auth: Alex reid
 */
#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 is equal to big 1 is equal to little
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 31)
		return (1);

	return (0);
}

