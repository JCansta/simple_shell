#include "holberton.h"

/**
 * convert - converter function, a clone of itoa
 * @num: number
 * @base: base
 * Return: string
 * credits to Farrukh Akhrarov "narnat" for the function itoa
 */
char *convert(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long int n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
	{
		*--ptr = sign;
	}
	return (ptr);
}
