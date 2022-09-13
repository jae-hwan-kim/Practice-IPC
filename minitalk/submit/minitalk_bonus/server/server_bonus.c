/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:39:40 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 21:52:28 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk_bonus.h"

int	main(int ac, char **av)
{
	check_server_ac(ac);
	get_pid(av);
	catch_signal_from_client();
	while (1)
		pause();
	return (0);
}
