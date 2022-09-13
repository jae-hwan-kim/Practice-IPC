/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:01:15 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:31:51 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

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
		usleep(50);
	}
}
