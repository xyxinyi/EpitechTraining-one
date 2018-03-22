#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)  
{  
    my_putstr(concat_params(ac, av));
    return (EXIT_SUCCESS);
}  

