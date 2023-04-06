#include "hash_tables_h"

/**
* hash_table_create - This function creates hash table
 * @size: The array size
 *
 * Return: A pointer to newly allocated hash table 
 * or Null if there is error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

