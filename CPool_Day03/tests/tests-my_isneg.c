#include <unistd.h>
#include"my_isneg.h"

int main()
{
	my_isneg(2);
	my_isneg(-2);
	write(1,"\n",1);
	return(0);
	}
