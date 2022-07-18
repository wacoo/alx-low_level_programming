#include "main.h"

/** _strspn - gets the length of prefix substring
 * @s: string given
 * @accept: the chars to be compared
 * Return: unsinged int
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, x, k; 
	char c;
	char *a = &c;

	i = 0;	
	while (s[i] != '\0')
	{
		j =0, k = 0;
		while (accept[j] != '\0')
		{	if (s[i] == accept[j])
			{
				a[k] = accept[j];
				k++;
			}		
			j++;
		}
		i++;
	}
	return (count);

}
