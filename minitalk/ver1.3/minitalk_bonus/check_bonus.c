/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:38:48 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:49:37 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	check_server_ac(int ac)
{
	if (1 != ac)
	{
		ft_printf("실행 방법\n[ ./server ] 로 실행하세요.\n");
		exit(1);
	}
}

void	check_client_ac(int ac)
{
	if (3 != ac)
	{
		ft_printf("실행 방법\n[ ./client PID \"메시지\" ]으로 입력하세요.\n");
		exit(1);
	}
}

void	check_string(char **av, int index)
{
	if (0 == av[2][index])
	{
		ft_printf("\n다시 입력 바랍니다.\n");
		ft_printf("1. 메시지가 있는지 확인하세요.\n");
		ft_printf("2. 올바른 PID인지 확인하세요 \n");
		exit(1);
	}
}
