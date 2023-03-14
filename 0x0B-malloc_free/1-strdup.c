#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - this function returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter.
 * @str: the string passing
 *
 * Return: return value of the newly allocated space
 */
char *_strdup(char *str)
{
	char *new;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	i = 0;
	while (str[i] != '\0')
		i++;

	new = (char *)malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	new[j] = str[j];

	return (new);
}
