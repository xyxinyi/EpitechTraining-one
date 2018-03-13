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

int main()
{
	printf("%d\n",my_strlen("hello"));
	write(1,"\n",1);
	return 0;
}

