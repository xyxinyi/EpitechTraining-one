#include <unistd.h>

int my_putchar(char c);

int my_print_revalpha(void)
{
	char i;
	for(i='z';i>='a';i--)
	{
		my_putchar(i);
	}
	return 0;
}
