#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void _puts(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(s[count]);
count++;
}
}
