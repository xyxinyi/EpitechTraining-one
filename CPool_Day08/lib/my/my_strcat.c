#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
	char *pdest = dest;
	char const *psrc = src;
	while(*pdest != '\0')
	{
		pdest++;
	}
	while(*psrc != '\0')
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';
	return dest;
}
