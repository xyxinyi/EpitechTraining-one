#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str)
{
	int length = 0;
	while(*str++ != '\0')
	{
		length++;
	}
	return length;
}

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

char *my_strdup(char const *src)  
{  
	char *t = NULL;  
	if (src && (t = (char*)malloc(my_strlen(src) + 1)))  
	my_strcpy(t, src);  
	return t;  
}
