#include <stdio.h>

int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

int my_str_isnum(char const *str)
{
	int result = 0;
	if(str != NULL)
	{
		int i = 0;
		if(my_strlen(str) == 0)
			result = 1;
		while(i < my_strlen(str))
		{
			if(str[i] < '0' || str[i] > '9') 
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

int main()
{
	//char *s = NULL;
	char s[] = "A34535350";
	printf("%d",my_str_isnum(s));		
	return 0;
}

