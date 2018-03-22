#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)  
{  
	char *t = NULL;  
	if (src && (t = (char*)malloc(my_strlen(src) + 1)))  
	my_strcpy(t, src);  
	return t;  
}
