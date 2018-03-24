#include <stdio.h>

int my_strlen(const char *s);

int my_str_isupper(char const *str)
{
	int result = 0;
	if(str != NULL)
	{
		int i = 0;
		if(my_strlen(str) == 0)
			result = 1;
		while(i < my_strlen(str))
		{
			if(str[i] < 'A' || str[i] > 'Z') 
			{ 
				result = 0;
				break;
			}
			else
				result = 1;
			i++;
		}
	}	
	return result;
}
