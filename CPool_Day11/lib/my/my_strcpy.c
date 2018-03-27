#include <unistd.h>
#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
	char *pdest = dest;
	char const *psrc = src;
	while(*psrc != '\0')
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';
	return dest;
}

