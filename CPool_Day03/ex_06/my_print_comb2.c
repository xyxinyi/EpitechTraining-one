#include <unistd.h>

void my_putchar(int c);
	
int my_print_comb2(void)
{
	int i,j,m,n;
	
	for(i=0;i<=9;i++)
	{

		for(j=0;j<=9;j++)
		{
			for(m=0;m<=9;m++)
			{
				for(n=0;n<=9;n++)
				{
					if(i<=m && n>j)
					{
						char I=i+'0';
						char J=j+'0';
						char M=m+'0';
						char N=n+'0';
						my_putchar(I);
						my_putchar(J);
						my_putchar(' ');
						my_putchar(M);
						my_putchar(N);
						if(i==9 && j==8 && m==9 && n==9)
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
	}
	return 0;
}

