#include "main.h"

/**
 * print_binary - prints the binary value.
 * of a number.
 * @n: receives unsigned long int as parameter.
 *
 * Return: none.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
