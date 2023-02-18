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
	putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}
