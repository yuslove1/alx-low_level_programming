#include <stdio.h>

/**
 * main - Entry of the function
 * @argc: the count
 * @argv: the array of string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
