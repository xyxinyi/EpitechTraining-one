#include <unistd.h>
#include <stdio.h>

int main()
{
	printf("%d\n",my_strlen("hello"));
	write(1,"\n",1);
	return 0;
}

