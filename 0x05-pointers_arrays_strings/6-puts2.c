#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_string - a function that  prints even-indexed character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i += 1;
	}
	for (int j = 0; j < i; j += 2)
	{
		_putchar(j);
	}
	_putchar('\n');
}