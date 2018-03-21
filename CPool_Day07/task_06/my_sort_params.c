#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
	int length = 0;
	while(*str++ != '\0')
	{
		length++;
	}
	return length;
}

int main(int argc, char **argv)
{
	int i,j,temp; 
	for(i=0;i<(argc-1);i++)  
    {  
        for(j=0;j<(argc-1)-i;j++)  
        {  
            if(*argv[j]>*argv[j+1])  
            {  
                temp=*argv[j];  
                *argv[j]=*argv[j+1];  
                *argv[j+1]=temp;  
            }  
        }  
    }  
    for(i=0;i<argc;i++)  
    {  
		int l = my_strlen(*(argv+i));
		write(1,*(argv+i),l);
		write(1,"$",1);
		write(1,"\n",1);
    }  
	return 0;
}

