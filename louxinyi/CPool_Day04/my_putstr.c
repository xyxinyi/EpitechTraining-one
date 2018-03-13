#include <unistd.h>

int my_putstr(char const *str)
{
	while(*str)
	{
		write(1,&*str,1);
		str++;
		}
	return 0;
	}

int main()
{
	my_putstr("HELLO WORLD");
	write(1,"\n",1);
	return 0;
}
