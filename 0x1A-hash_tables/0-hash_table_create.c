#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: hi
 * Return: returns a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(ht) * size);
	
	return ht;
}