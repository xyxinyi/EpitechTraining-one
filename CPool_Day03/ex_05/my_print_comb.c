#include <unistd.h>

void my_putchar(int c);

int my_print_comb(void)
{
	for(int x1=0; x1<=7; x1++)
	{
		for(int x2=1; x2<=8; x2++)
		{
			if(x2==x1)
				continue;
			for(int x3=2; x3<=9; x3++)
			{
				if(x3==x2||x3==x1)
					continue;
				if(x1<x2&&x2<x3)
				{
					char I=x1+'0';
					char J=x2+'0';
					char K=x3+'0';
					my_putchar(I);
					my_putchar(J);
					my_putchar(K);
					if(x1==7 && x2==8 && x3==9)
					{
						my_putchar('\n');
						continue;
					}
					my_putchar(','); 
				}
					else
						continue;
			}
		}
	}
	return 0;
}

