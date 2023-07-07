#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Return: Always EXIT_SUCCESS.
 * main - check the code
 */
int main(void)
{
    char *string;

    string = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)string));
    string = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)string));
    string = "98";
    printf("%lu\n", hash_djb2((unsigned char *)string));
    return (EXIT_SUCCESS);
}
