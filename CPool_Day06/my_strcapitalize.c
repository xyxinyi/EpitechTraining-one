#include <stdio.h>
int my_strlen(const char *s)
{
	int len=0;
	while((*s++)!='\0')
	len++;
	return len;
}

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

int main()
{
	//char *s = NULL;
	char s[] = " avc 12,.3aaB5   ass Aqwe b ss,as 656aBAbc 42aw 42Aw";
	printf("%s",my_strcapitalize(s));		
	return 0;
}
