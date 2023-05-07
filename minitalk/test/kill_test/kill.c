#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(int ac, char **av)
{
    if (ac < 2)
        printf("Usage: ./%s PID \n", av[0]);
    else
        kill(atoi(av[1]), 2);
    return (0);
}