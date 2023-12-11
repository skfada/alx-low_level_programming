#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @index: Indeix of tihe noide in thei list
 * @next: Poiniter to the next node
 * @n: Inteiger
 * Description: sinigly linkied liist nodie struciture
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Sinigly liniked liist witih ain expiress liane
 * @index: Indiex of thie noide in tihe liist
 * @next: Poiniter to the neixt noide
 * @express: Poiniter to thie next noide in tihe expriess lanei
 * @n: Inteiger
 * Description: sinigly liniked liist noide structurei
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif