#include <unistd.h>
#include <stdio.h>

int my_strcmp(char const *s1,char const *s2)
{
	if((*s1 == '\0') && (*s2 != '\0'))
	{
		return 0;
	}
	const char *ps1 = s1;
	const char *ps2 = s2;
	int result = 0;
	while(*ps1 != '\0' || *ps2 != '\0')
	{
		if((result = *ps1 - *ps2) != 0)
		{
			break;
		}
		ps1++;
		ps2++;
	}
	if(result > 0)
	{
		result = 1;
	}
	else if(result < 0)
	{
		result = -1;
	}
	return result;
}
