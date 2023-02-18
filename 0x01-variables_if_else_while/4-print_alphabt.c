#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z';  i++)
	{
	if (i == 'e')
	{
	continue;
	}
	if (i == 'q')
	{
	continue;
	}
	putchar(i);
	}
	putchar('\n');
	return (0);
}
