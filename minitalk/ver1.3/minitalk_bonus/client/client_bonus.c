/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 21:39:17 by jaekim            #+#    #+#             */
/*   Updated: 2022/06/09 22:09:52 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk_bonus.h"

int	main(int ac, char **av)
{
	check_client_ac(ac);
	get_pid(av);
	catch_signal_from_server();
	send_signal(av);
	return (0);
}
