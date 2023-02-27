#include "main.h"
/**
 * puts2 -  prints character of a string, starting with the first character
 * @str: receives strings pointer inpute.
 * Return: no return.
 */
void puts2(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
if (count % 2 == 0)
_putchar(str[count]);
count++;
}
}
