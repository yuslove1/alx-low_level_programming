#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s1: first string passing
 * @s2: second string passing
 *
 * Return: return value of the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *newAllocSpace;
	unsigned int len1, len2, len1Out, len2Out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	newAllocSpace = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newAllocSpace == NULL)
	{
		free(newAllocSpace);
		return (NULL);
	}

	for (len1Out = 0; len1Out < len1; len1Out++)
	newAllocSpace[len1Out] = s1[len1Out];

	for (len2Out = 0; len2Out <= len2; len1Out++, len2Out++)
	newAllocSpace[len1Out] = s2[len2Out];

	return (newAllocSpace);
}
