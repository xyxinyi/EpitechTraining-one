#include <unistd.h>
#include <stdio.h>

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_isneg(int n)
{
	if (n < 0)
		my_putchar(78);
	else
		my_putchar(80);
	return 0;
}

int main()
{
	my_isneg(2);
	my_isneg(-2);
	write(1,"\n",1);
	return(0);
	}
