#include "main.h"

/**
* _strlen - this function swap value
* @s: parameter
* Return: value of u
*/
int _strlen(char *s)
{
	int u;
	u = 0;

	while(s[u] != '\0')
	{
	u++;
	}
	return (u);
}
