#include <stdio.h>

char *my_strncat(char *dest, char const *src, int nb)
{
	char *pdest = dest;
	char const *psrc = src;
	while(*pdest != '\0')
	{
		pdest++;
	}
	while(nb > 0)
	{
		*pdest++ = *psrc++;
		nb--;
	}
	*pdest = '\0';
	return dest;
}

