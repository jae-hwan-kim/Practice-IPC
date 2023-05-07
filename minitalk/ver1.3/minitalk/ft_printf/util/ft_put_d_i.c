/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:32:21 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:32:24 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_put_d_i(int num)
{
	unsigned int	print_d;

	print_d = 0;
	if (num > -2147483648 || num <= 2147483637)
		print_d = ft_putnbr(num);
	return (print_d);
}
