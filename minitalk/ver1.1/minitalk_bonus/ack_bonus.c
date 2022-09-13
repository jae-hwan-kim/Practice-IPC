/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ack_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:38:34 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:42:34 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

size_t	g_ack_count = 0;

void	check_ack(size_t size)
{
	if (g_ack_count == size)
	{
		ft_printf("총 문자 수 : %d\n", g_ack_count);
		ft_printf("메시지 송신에 성공했습니다.\n");
	}
	else
	{
		ft_printf("메시지를 송신에 실패했습니다.\n");
		exit(1);
	}
}

void	count_ack(int signal, siginfo_t *info, void *context)
{
	(void) info;
	(void) context;
	(void) signal;
	g_ack_count++;
}
