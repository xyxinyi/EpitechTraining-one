#include <unistd.h>
#include <stdio.h>

char *my_strncpy(char *dest, char const *src, int n)
{
	char *strDest = dest;
	if((dest != NULL)&&(src != NULL))
	{
		while(n && (*dest++ = *src++) != '\0')
		{
			n--;
		}
		if(n)
		{
			while(--n)
			{
				*dest++ = '\0';
			}
		}
	}
	return strDest;
}

int main()
{
	//char *str1 = "hello";
	//char *str2 = "world"
	char str1[20] = "how";
	char str2[20] = "whatabcdef";
	printf("%s\n",my_strncpy(str1,str2,2));
	return 0;
}

