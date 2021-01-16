#include "hash_tables.h"

/**
 * key_index - Fuction that gives the index of a key
 * @key: pointer to key
 * @size: size of the table
 * Return: the Index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
