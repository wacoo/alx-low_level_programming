#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: string given
 *
 */

void rev_string(char *s)
{
	char *t = s;
	char tmp[1000];
	short c = 0;

	while (*s != '\0')
	{
		tmp[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = tmp[c];
		c++;
	}
}
