#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: receives unsigned long int pointer as parameter.
 * @index: receives unsigned int index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
