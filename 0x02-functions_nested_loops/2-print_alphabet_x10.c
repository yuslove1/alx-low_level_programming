#include "main.h"
/**
* print_alphabet_x10 - This function print alphabet
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int alphabet;
	int times;

	for (times = 1; times <= 10; times++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
	}
}
