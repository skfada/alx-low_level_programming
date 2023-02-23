#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
putchar(i);
} /* this  line of the code is suppose to state the increment  or decrement of the variable*/

printf("Infinite loop avoided! \\o/\n");

return (0);
}
