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

int main(int argc, char **argv)
{
	while(argc > 0)
	{	
		int l = my_strlen(*(argv + argc - 1));
		write(1,*(argv + argc - 1),l);
		write(1,"$",1);
		write(1,"\n",1);
		argc--;
	}
	return 0;
}

