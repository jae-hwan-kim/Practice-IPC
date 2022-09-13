#include "../minitalk.h"
// 클라이언트에서 서버에 메시지를 전송한다.
// 이때 인자로 서버 pid 와 메시지를 보낸다.
// ex) ./client [PID] [메시지]
// if (signo == SIGUSR1)
    // {
    //     if (write(1, "0", 1))
    //         kill(info->si_pid, SIGUSR1);
    // }
    // else if (signo == SIGUSR2)
    // {
    //     if(write(1, "1", 1))
    //         kill(info->si_pid, SIGUSR2);
    // }
    // if (ac < 3)
    // {
    //     printf("Usage : %s PID \n", av[0]);
    // }
    // else
    // {
    //     if (atoi(av[2]) == 30)
    //         kill(atoi(av[1]), SIGUSR1);
    //     else if (atoi(av[2]) == 31)
    //         kill(atoi(av[1]), SIGUSR2);
    // }
    // printf("No Usage PID \n");

void    binary_to_decimal(int signal, char *message, int *index)
{
    if (signal == SIGUSR1)
        *message += 0 << *index;
    else if (signal == SIGUSR2)
        *message += 1 << *index;
    (*index)--;
}

void    display_message(char *message, int *index)
{
    if (0 > *index)
    {
        write(1, message, 1);
        *message = 0;
        *index = 7;
    }
}


void	get_message(int signal, siginfo_t *info, void *context)
{
    (void) info;
    (void) context;
    static char message = 0;
    static int  index = 7;

    binary_to_decimal(signal, &message, &index);
    display_message(&message, &index);
}
