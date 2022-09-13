/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:00:48 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:07:21 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	get_pid(char **av)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("Program : %s\n", av[0]);
	ft_printf("PID [%d]\n", pid);
}

int	minitalk_atoi(const char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			error_pid();
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
	}
	return (result);
}
