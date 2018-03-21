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

int my_putchar(char c)
{
	write(1,&c,1);
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;
	while(argc > 0)
	{	
		int l = my_strlen(*(argv + i));
		write(1,*(argv + i),l);
		write(1,"$",1);
		write(1,"\n",1);
		i++;
		argc--;
	}
	return 0;
}

