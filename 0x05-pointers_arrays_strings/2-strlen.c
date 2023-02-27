#include "main.h"
/**
 * _strlen - this function return the lengh of a string.
 * @s: this is the input pointer string type
 * Return: it returns the string length.
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}
