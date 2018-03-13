#include <unistd.h>
#include"my_print_revalpha.h"

void my_putchar(int c)
{
	write(1,&c,1);
	}

int my_print_revalpha(void)
{
	int i;
	for(i=122;i>=97;i--)
	{
		my_putchar(i);
		}
	return 0;
}
