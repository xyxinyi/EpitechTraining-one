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

int main()
{
	//char *str1 = "hello";
	//char *str2 = "world"
	char str1[] = "hello";
	char str2[] = "world";
	printf("%s\n",my_strcpy(str1,str2));
}

