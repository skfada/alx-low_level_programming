#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * need to flip to get from one number to another
 * @n: receives unsigned lont int  as number one
 * for parameter.
 * @m: receives unsigned long int as number two
 * as a parameter.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}
