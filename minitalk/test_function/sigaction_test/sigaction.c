#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/signal.h>

void    sig_handler(int signo)
{
    printf("\nYou can't ctrl + c me\n");
}
// void    (*__sa_sigaction)(int, struct __siginfo *, void *);
int main(void)
{
    struct sigaction act;
    int i = 0;

    act.sa_handler = sig_handler;
    // act.sa_sigaction = sig_handler;
    // act.sa_flags = SA_SIGINFO;
    sigaction(SIGINT, &act, NULL);
    while(1)
    {
        printf("%d\n", i);
        i++;
        sleep(2);
    }
    return (1);
}
