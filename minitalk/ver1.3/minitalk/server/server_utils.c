/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:01:40 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:19:44 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	binary_to_decimal(int signal, char *message, int *index)
{
	if (signal == SIGUSR1)
		*message += 0 << *index;
	else if (signal == SIGUSR2)
		*message += 1 << *index;
	(*index)--;
}

void	display_message(char *message, int *index)
{
	if (0 > *index)
	{
		write(1, message, 1);
		*message = 0;
		*index = 7;
	}
}

void	get_message(int signal, siginfo_t *info, void *context)
{
	static char	message = 0;
	static int	index = 7;

	(void) info;
	(void) context;
	binary_to_decimal(signal, &message, &index);
	display_message(&message, &index);
}
