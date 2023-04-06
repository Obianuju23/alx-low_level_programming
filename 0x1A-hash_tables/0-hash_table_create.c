#include "hash_tables.h"

/**
 * hash_table_create - This is a function that creates a hash table
 * @size: the size of the array
 * Return: A pointer to the hash table newly created,
 * or NULL incase of error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

      /* Allocate memory space for the new hash table */
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

     /* Set the size of the new hash table */
	new_hash_table->size = size;

    /* Allocate memory space for the array of hash nodes */
	new_hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_hash_table->array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
	new_hash_table->array[i] = NULL;
	i++;
	}
	return (new_hash_table);
}
