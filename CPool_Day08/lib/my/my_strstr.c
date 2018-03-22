#include<stdio.h>

int my_strlen(const char *s);

char *my_strstr(char *str, char const *to_find)
{
	char *pstr = str;
	char *pto_find = (char*)to_find;
	int i = 0, j = 0, k = 0;
	while (i < my_strlen(str) && j < my_strlen(to_find))
	{
		if (*(pstr + i) == *(pto_find + j))
		{
			i++;
			j++;
		}
		else
		{
			j = 0;
			k++;
			i = k;
		}
	}
	if (j >= my_strlen(to_find)) 
	{
		return (pstr+k);
	}
	else
	{
		return NULL;
	}
}
 


