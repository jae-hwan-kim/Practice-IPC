/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ack_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:38:34 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/13 07:45:25 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	init_ack(t_ack *ack)
{
	ack->count_zero_bit = 0;
	ack->count_one_bit = 0;
}

void	check_ack(size_t size, t_ack *g_ack)
{
	size_t	count_byte;

	count_byte = (g_ack->count_zero_bit + g_ack->count_one_bit) / 8;
	if (count_byte == size)
	{
		ft_printf("총 문자 수 : %d\n", count_byte);
		ft_printf("메시지 송신에 성공했습니다.\n");
	}
	else
	{
		ft_printf("총 문자 수 : %d\n", count_byte);
		ft_printf("메시지 송신에 실패했습니다.\n");
		exit(1);
	}
}
