#include "main.h"
#include "_putchar.c"

/**
 * main -  prints the name of the
 * file it was compiled from,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char path[] = __BASE_FILE__;

	i = 0;
	while (path[i])
	{
		_putchar(path[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
