#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * Return: Always EXIT_SUCCESS.
 * main - check the code
 */
int main(void)
{
    unsigned long int hash_table_array_size;
    char *string;

    hash_table_array_size = 1024;
    string = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)string));
    printf("%lu\n", key_index((unsigned char *)string, hash_table_array_size));
    string = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)string));
    printf("%lu\n", key_index((unsigned char *)string, hash_table_array_size));
    string = "98";
    printf("%lu\n", hash_djb2((unsigned char *)string));
    printf("%lu\n", key_index((unsigned char *)string, hash_table_array_size));
    return (EXIT_SUCCESS);
}
