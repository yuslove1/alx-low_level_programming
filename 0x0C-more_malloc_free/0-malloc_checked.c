#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: malloc argument
 *
 * Return: return pointer to new memory location if succesfull else exit
 */
void *malloc_checked(unsigned int b)
{
	char *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);

	return (new);
}
