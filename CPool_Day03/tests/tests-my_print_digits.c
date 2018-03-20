#include<unistd.h>
#include"my_print_digits.h"

int main()
{
	my_print_digits();
	write(1,"\n",1);
	return(0);
	}
