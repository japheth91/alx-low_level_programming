#include "main.h"

/**
 * leet - converts string to leeet
 * @c: char
 * Return: char
 */
char *leet(char *c)
{
	int x = 0, y;
	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	leet[] = {'4', '3', '0', '7', '1'};

	while (c[x] != '\0')
	{
		y = 0;
		while (y < 5)
		{
			if (c[x] == a[y] || c[x] == b[y])
				c[x] = leet[y];
			y++;
		}
		x++;
	}
	return (c);
}
