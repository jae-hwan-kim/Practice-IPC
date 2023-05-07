/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:39:24 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 22:13:26 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk_bonus.h"

t_ack	*g_ack = 0;

void	send_signal_to_server(pid_t pid, int bit)
{
	if ((bit & 1) == 0)
	{
		if (0 != kill(pid, SIGUSR1))
			error_kill();
	}
	else if ((bit & 1) == 1)
	{
		if (0 != kill(pid, SIGUSR2))
			error_kill();
	}
}

void	decimal_to_binary(pid_t pid, char character)
{
	int	shift;
	int	bit;

	shift = 7;
	while (0 <= shift)
	{
		bit = character >> shift;
		send_signal_to_server(pid, bit);
		shift--;
		pause();
		usleep(50);
	}
}

void	send_signal(char **av)
{
	int				index;
	pid_t			pid;

	index = 0;
	pid = (pid_t)minitalk_atoi(av[1]);
	check_string(av, index);
	g_ack = (t_ack *)malloc(sizeof(g_ack));
	if (0 == g_ack)
		exit(1);
	init_ack(g_ack);
	while (0 != av[2][index])
	{
		decimal_to_binary(pid, av[2][index]);
		index++;
	}
	check_ack(ft_strlen(av[2]), g_ack);
}

void	count_ack(int signal, siginfo_t *info, void *context)
{
	size_t	*bit_zero;
	size_t	*bit_one;
	size_t	bit;

	(void) info;
	(void) context;
	bit_zero = &(g_ack->count_zero_bit);
	bit_one = &(g_ack->count_one_bit);
	if (signal == SIGUSR1)
	{
		(*bit_zero)++;
		bit = *bit_one + *bit_zero;
	}
	if (signal == SIGUSR2)
	{
		(*bit_one)++;
		bit = *bit_one + *bit_zero;
	}
}

void	catch_signal_from_server(void)
{
	struct sigaction	message_client;

	message_client.sa_sigaction = count_ack;
	message_client.sa_flags = SA_SIGINFO;
	sigemptyset(&message_client.sa_mask);
	if (0 != sigaction(SIGUSR1, &message_client, NULL))
		error_sigaction();
	if (0 != sigaction(SIGUSR2, &message_client, NULL))
		error_sigaction();
}
