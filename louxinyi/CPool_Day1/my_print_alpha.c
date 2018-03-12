#include <unistd.h>

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_print_alpha(void)
{
	int i;
	for(i=97;i<=122;i++)
	{
		my_putchar(i);
		}
	return 0;
}

int main()
{
	my_print_alpha();
	write(1,"\n",1);
	return(0);
	}
