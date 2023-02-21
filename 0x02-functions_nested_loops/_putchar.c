#include <unistd.h>

/**
* _putchar - write character c to stdout
* @c - charater to print
* Return: return 1 on success and -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
