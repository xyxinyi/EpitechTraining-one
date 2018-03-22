#include <stdlib.h>
#include <stdio.h>

/*int main(){
    char a[] = "strdup";
    char *b;
    b = my_strdup(a);
    printf("%s", b);
    return 0;
}*/

int main()  
{  
    char str[14] = "rocket-黑夜\n";  
    printf("%s",str);  
    char *p1 = NULL;  
    char *p2 = "calc";  
    p1 = my_strdup(p2);  
    printf("p1=%s     p2=%s\n", p1, p2);  
    p1 = my_strdup(str);  
    printf("p1=%s", p1);  
    free(p1);  
    return 0;
}  
