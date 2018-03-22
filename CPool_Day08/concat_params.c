#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_putstr(char const *str);

char *my_strcat(char *dest, char const *src);

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

