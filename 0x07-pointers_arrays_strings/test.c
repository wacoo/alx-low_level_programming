#include <stdio.h>

int main(void)
{
	char s[] = "hello, world";
	char a[] = "oleh";
	int i = 0, j, k = 0;
	while (a[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (a[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n", k);
}
