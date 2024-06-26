#include "hash_tables.h"

/**
 * hash_djb2 - implents the hash of djb2
 * @str: inputs the string to hash
 *
 * Return: the computed hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
