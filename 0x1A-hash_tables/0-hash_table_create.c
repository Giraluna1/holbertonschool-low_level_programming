#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	/* create table size of capacity and size of pointer node */
	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	/* assign size of table is size capacity argument*/
	table->size = size;
	/* Allocate the linked lis size of real node*/
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
