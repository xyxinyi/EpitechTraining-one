#include <stdio.h>

int my_strlen(const char *s);

char *my_strcapitalize(char *str)
{
	if(str != NULL)
	{
		int i = 0;
		while(i < my_strlen(str))
		{
			if(str[i-1] <48 || (str[i-1] > 57 && str[i-1] < 'A') || (str[i-1] > 'Z' && str[i-1] < 'a') || str[i-1] > 'z')
			{
				if(str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
			else if(str[i] >= 'A' && str[i] <= 'Z') 
				str[i]+=32;
			i++;	
		}
		return str;
	}
	else
		return NULL;
}
