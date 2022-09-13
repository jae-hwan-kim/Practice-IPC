#include "minitalk.h"

void    error_sigaction(void)
{
    ft_printf("\n메시지 수신에 실패했습니다.\n");
    exit(1);
}

void    error_pid(void)
{
    ft_printf("\n메시지 전송에 실패했습니다.\n");
    ft_printf("올바른 PID 를 입력하세요.\n");
    exit(1);
}

void    error_kill(void)
{
    ft_printf("\n메시지 전송에 실패했습니다.\n");
    ft_printf("\n[해결 방법]\n");
    ft_printf("1. 서버가 실행됐는지 확인하세요.\n");
    ft_printf("2. 올바른 PID 인지 확인하세요.\n");
    exit(1);
}


