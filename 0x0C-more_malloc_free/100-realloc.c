#include "main.h"

/**
 * _realloc - reallocates memory blocks
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space in bytes
 * @new_size: new size of memory block in bytes
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
