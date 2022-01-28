#include "hash_tables.h"
/**
* hash_table_create - create hash table
* @size: size of hash table
*
* Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	size_t i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++) 
			hash_table->array[i] = NULL;

	return (hash_table);
}
