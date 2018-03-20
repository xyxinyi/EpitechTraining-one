#include <unistd.h>

int main()
{
	int a=1;
	int b=2;
	int *p,*q;
	p = &a;
	q = &b;
	my_swap(p,q);
	printf("%d\n%d\n",a,b);
	return 0;
}

