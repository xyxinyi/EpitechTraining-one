#include <stdio.h>

int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

int my_str_isprintable(char const *str)
{
	int result = 0;
	if(str != NULL)
	{
		int i = 0;
		if(my_strlen(str) == 0)
			result = 1;
		while(i < my_strlen(str))
		{
			if(str[i] < 32 || str[i] > 127) 
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
	char s[] = "12dw.,.+-=-=<>";
	printf("%d",my_str_isprintable(s));		
	return 0;
}
