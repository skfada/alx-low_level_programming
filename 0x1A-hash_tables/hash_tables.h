#ifndef HASH
#define HASH

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @key: The unigue key, string
  */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * @array: An array of size @size
 * @size: The size of the array
 * struct hash_table_s - Hash table data structure
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);
void print_list(hash_node_t *h);
void free_list(hash_node_t *head);
void replace_value(hash_node_t **ht, const char *key, const char *value);
int check_key(hash_node_t *ht, const char *key);


/**
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 * struct shash_node_s - Node of a sorted hash table *
 * @key: The key, string
 * @value: The value corresponding to a key
 */
typedef struct shash_node_s
{
	 char *key;
	 char *value;
	 struct shash_node_s *next;
	 struct shash_node_s *sprev;
	 struct shash_node_s *snext;
} shash_node_t;

/**
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 */
typedef struct shash_table_s
{
	 unsigned long int size;
	 shash_node_t **array;
	 shash_node_t *shead;
	 shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);

void insert_sort(shash_node_t *node, shash_table_t *ht);
void free_list_s(shash_node_t *head);
int replace_value_s(shash_node_t **ht, const char *key, const char *value);
int check_key_s(shash_node_t *ht, const char *key);
shash_node_t *add_node_s(shash_node_t **head,
	const char *key, const char *value);


#endif