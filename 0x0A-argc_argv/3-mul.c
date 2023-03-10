#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to the function that multiplies number
 * @argc: the count
 * @argv: the array of string
 *
 * Return: 1 if are less of 2 argument otherwise 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", mul);
	}
	return (0);
}
