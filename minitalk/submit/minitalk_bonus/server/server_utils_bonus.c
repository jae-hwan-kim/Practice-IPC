/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:39:49 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:56:05 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk_bonus.h"

void	display_message(char *message, int *index)
{
	if (0 > *index)
	{
		write(1, message, 1);
		*message = 0;
		*index = 7;
	}
}

void	binary_to_decimal(int signal, char *msg, int *index)
{
	if (signal == SIGUSR1)
		*msg += 0 << *index;
	else if (signal == SIGUSR2)
		*msg += 1 << *index;
	(*index)--;
}

void	get_message(int signal, siginfo_t *info, void *context)
{
	static char	message = 0;
	static int	index = 7;
	pid_t		client_pid;

	(void) context;
	client_pid = info->si_pid;
	binary_to_decimal(signal, &message, &index);
	display_message(&message, &index);
	usleep(50);
	kill(client_pid, signal);
}

void	catch_signal_from_client(void)
{
	struct sigaction	message_server;

	message_server.sa_sigaction = get_message;
	message_server.sa_flags = SA_SIGINFO;
	sigemptyset(&message_server.sa_mask);
	if (0 != sigaction(SIGUSR1, &message_server, NULL))
		error_sigaction();
	if (0 != sigaction(SIGUSR2, &message_server, NULL))
		error_sigaction();
}
