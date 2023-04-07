#include "hash_tables.h"

/**
 **hash_table_get - This function searches for a key and its pair
 *then retrieves them in a hash table
 *@ht: pointer to hash table
 *@key: the key used in getting the value
 *
 * Return: returns the content of key and its value or NUll if cannot match  * the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	item_node = ht->array[index];
	while (item_node && strcmp(item_node->key, key) != 0)
		item_node = item_node->next;

	return ((item_node == NULL) ? NULL : item_node->value);
}
