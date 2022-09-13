#include "../minitalk.h"

// generate_signal.sa_sigaction = handler;
// generate_signal.sa_flags = SA_SIGINFO;
//예외 조건 필요 ac 개수, 해당 pid 없을 때.
// if (ac < 3)
// {
//     printf("Usage : %s PID \n", av[0]);
// }
// else
//     printf("No Usage PID \n");

// void	handler(int signo, siginfo_t *info, void *context)
// {
//     (void) signo;
//     (void) info;
//     (void) context;
// }
void    send_signal(char **av)
{
    int     index;
    pid_t   pid;

    index = 0;
    pid = (pid_t)minitalk_atoi(av[1]);
    check_string(av, index);
    while (0 != av[2][index])
    {
        decimal_to_binary(pid, av[2][index]);
        index++;   
    }
}

int main(int ac, char **av)
{
    check_client_ac(ac);
    get_pid(av);
    send_signal(av);
    return (0);
}
// printf("시간: %02d.%06d\n", lt->tm_sec, tv.tv_usec);
// 잘받았다는 신호 받고 넘어가면 좋을 듯.
// 첫번째 시그널만 보내고 pause를 하고 있다가, 서버에서 반응오면
// generate_signal이 동작하도록 해야할듯?
// pause();
// if (sigaction(SIGUSR1, &generate_signal, NULL) != 0)
//     exit(1);