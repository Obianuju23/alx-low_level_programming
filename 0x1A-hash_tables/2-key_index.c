#include "hash_tables.h"

/**
 * key_index - This is the index at which the value/key pair
 * should store in * the hash table array
 * @key: the key to get the index
 * @size: size of the array of the hash table
 * Return: Key's index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);

}
