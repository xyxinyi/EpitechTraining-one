#include <unistd.h>

int main()
{
	my_putstr("HELLO WORLD");
	write(1,"\n",1);
	return 0;
}
