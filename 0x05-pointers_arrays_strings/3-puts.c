#include "main.h"
/**
 * _puts - it takes string input and prints strings output.
 * @str: is the string input parameter.
 * Return: does not return value.
 */
void _puts(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
}
