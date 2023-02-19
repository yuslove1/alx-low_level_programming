#include <stdio.h>
/**
 *main - Entry
 *Return: always 0
 */
int main(void)
{
	int x;
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar('0' + a);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
