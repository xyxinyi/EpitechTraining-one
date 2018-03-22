#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_putstr(char const *str)
{
	while(*str)
	{
		write(1,&*str,1);
		str++;
	}
	return 0;
}

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

char *concat_params(int argc, char **argv) 
{  
	char *pdest = (char *)malloc(sizeof(char));
	for(int i = 0; i < argc; i++)
	{
		my_strcat(pdest,argv[i]);
		my_strcat(pdest,"\n");
	}
	return pdest;  
}    

