#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


int main(int ac, char **av)
{
    if (ac < 3)
    {
        printf("Usage : %s PID \n", av[0]);
    }
    else
    {
        if (atoi(av[2]) == 30)
            kill(atoi(av[1]), SIGUSR1);
        else if (atoi(av[2]) == 31)
            kill(atoi(av[1]), SIGUSR2);
    }
    printf("No Usage PID \n");
    return (0);
}