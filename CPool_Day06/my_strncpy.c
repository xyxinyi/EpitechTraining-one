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

