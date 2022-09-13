#ifndef MINITALK_H
# define MINITALK_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/signal.h>
#include <signal.h>

void    get_pid(char **av);
int	    ft_printf(const char *argu, ...);
int     minitalk_atoi(const char *str);

void    send_signal(char **av);
void    send_message(char **av);
void    send_signal_to_server(pid_t pid, int bit);
void    decimal_to_binary(pid_t pid, char character);

void    catch_signal(void);
void	get_message(int signal, siginfo_t *info, void *context);
void    display_message(char *message, int *index);
void    binary_to_decimal(int signal, char *message, int *index);

void    error_sigaction(void);
void    error_pid(void);
void    error_kill(void);
void    check_server_ac(int ac);
void    check_client_ac(int ac);
void    check_string(char **av, int index);

#endif