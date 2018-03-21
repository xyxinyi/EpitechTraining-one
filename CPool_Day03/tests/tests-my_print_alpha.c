#include <unistd.h>
#include"my_print_alpha.h"

int main()
{
	my_print_alpha();
	write(1,"\n",1);
	return(0);
}

