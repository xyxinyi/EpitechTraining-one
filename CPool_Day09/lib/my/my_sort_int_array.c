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

char my_sort_int_array(int *array, int size)
{
	int *p1,*p2,t;
	for(p1 = array; p1 <= array + size - 2; p1++)
	for(p2 = p1 + 1; p2 <= array + size - 1; p2++)
	if(*p1 > *p2)
	{
		t = *p1;
		*p1 = *p2;
		*p2 = t;
	}
	return *array;
}

int main()
{
	int array[] = {9,8,7,3,1,5,58,0,54,98,12,2,4,31};
	int len = sizeof(array) / sizeof(array[0]);
	my_sort_int_array(array,len);
	printf("%d\n",len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
