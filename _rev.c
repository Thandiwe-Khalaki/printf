int _strlen(char *c)
{
	int i;

	for (i = 0 ; *(c + i) != '\0' ; i++)
	{
		continue;
	}
	return (i);
}

#include "main.h"

int print_rev(char *c)
{
	int i;
	int j;
	int count = 0;

	if (c)
	{
		j = _strlen(c);
		for (i = j ; *(c + i - 1) != '\0' ; i--)
		{
			count += _putchar(*(c + i - 1));
		}
		_putchar('\n');
	}
	return (count);
}
