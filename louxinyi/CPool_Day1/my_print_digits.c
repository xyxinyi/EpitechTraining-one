#include <unistd.h>

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_print_digits(void)
{
	char c;
	for(c='0';c<='9';c++)
	{
		my_putchar(c);
		}
	return 0;
}

int main()
{
	my_print_digits();
	write(1,"\n",1);
	return(0);
	}
