#include "main.h"

/**
 * binary_to_uint - converts a binary value to an
 * unsigned int.
 * @b: receives char type inpute as binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int count, baseTwo;

	if (!b)
		return (0);

	unsigned_int = 0;

	for (count = 0; b[count] != '\0'; count++)
		;

	for (count--, baseTwo = 1; count >= 0; count--, baseTwo *= 2)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}

		if (b[count] & 1)
		{
			unsigned_int += baseTwo;
		}
	}

	return (unsigned_int);
}
