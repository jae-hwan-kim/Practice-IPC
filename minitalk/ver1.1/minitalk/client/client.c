/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:01:08 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:33:33 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	send_signal(char **av)
{
	int		index;
	pid_t	pid;

	index = 0;
	pid = (pid_t)minitalk_atoi(av[1]);
	check_string(av, index);
	while (0 != av[2][index])
	{
		decimal_to_binary(pid, av[2][index]);
		index++;
	}
}

int	main(int ac, char **av)
{
	check_client_ac(ac);
	get_pid(av);
	send_signal(av);
	return (0);
}
