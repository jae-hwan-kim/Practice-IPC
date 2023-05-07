#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void    sig_handler(int signo)
{
    printf("\nYou can't ctrl + c me\n");
}

int main(void)
{
    int i = 0;
    
    signal(SIGINT, (void *)sig_handler);
    
    while(1)
    {
        printf("%d\n", i);
        i++;
        sleep(1);
    }
    return (1);
}
