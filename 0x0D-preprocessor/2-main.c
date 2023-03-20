#include <stdio.h>

/**
 * main - Entry to program that print name of the file it was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
