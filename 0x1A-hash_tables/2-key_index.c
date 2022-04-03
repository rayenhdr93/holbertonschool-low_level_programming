#include "hash_tables.h"
/**
 * key_index - key -> index
 * @key: key
 * @size: size
 * Return: key -> index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h = hash_djb2(key);

	return (h % size);
}
