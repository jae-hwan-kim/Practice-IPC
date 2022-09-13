/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:31:28 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:31:32 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_put_u(unsigned int num)
{
	unsigned int	print_d;

	print_d = 0;
	if (num > 0 || num <= 4294967295)
		print_d = ft_putnbr(num);
	return (print_d);
}
