/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:37:01 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:45:46 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/signal.h>
# include <signal.h>

void	get_pid(char **av);
int		ft_printf(const char *argu, ...);
size_t	ft_strlen(const char *str);
int		minitalk_atoi(const char *str);

void	send_signal(char **av);
void	send_message(char **av);
void	count_ack(int signal, siginfo_t *info, void *context);
void	catch_signal_from_server(void);
void	send_signal_to_server(pid_t pid, int bit);
void	decimal_to_binary(pid_t pid, char character);
void	check_ack(size_t size);

void	get_message(int signal, siginfo_t *info, void *context);
void	display_message(char *message, int *index, pid_t client_pid);
void	catch_signal_from_client(void);
void	binary_to_decimal(int signal, char *message, int *index);
void	send_ack(pid_t client_pid);

void	error_sigaction(void);
void	error_pid(void);
void	error_kill(void);
void	check_server_ac(int ac);
void	check_client_ac(int ac);
void	check_string(char **av, int index);

#endif
