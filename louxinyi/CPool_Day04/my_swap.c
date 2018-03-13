#include <unistd.h>
#include <stdio.h>

void my_swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	}

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

