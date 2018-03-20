#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
	int length = 0;
	while(*str++ != '\0')
	{
		length++;
	}
	return length;
}

char *my_evil_str(char *str)
{
	int l = my_strlen(str);
	char t;
	int i;
	for(i = 0; i < l/2; i++)
	{
		t = *(str + i);
		*(str + i) = *(str + l - i -1);
		*(str + l - i -1) = t;
	}
	return str;
}

