#include <stdio.h>
/**
 *main - Entry
 *Return: always 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar (x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
