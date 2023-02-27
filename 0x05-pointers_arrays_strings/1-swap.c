#include "main.h"
/**
 * swap_int - this funtion receives two int pointer parameter and swaps their values.
 * @a: first input integer value.
 * @b: second input integer value.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
int c = *a;
  
*a = *b;
*b = c;
}
