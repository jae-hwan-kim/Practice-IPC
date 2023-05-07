/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:01:33 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:21:44 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

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

int	main(int ac, char **av)
{
	check_server_ac(ac);
	get_pid(av);
	catch_signal_from_client();
	while (1)
		;
	return (0);
}
