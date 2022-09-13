/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:30:46 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/03 17:50:04 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_put_x(unsigned int num, char argu)
{
	unsigned int	print_x;
	char			*hex_lower;
	char			*hex_upper;

	print_x = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (argu == 'x')
		print_x = ft_puthex(num, hex_lower);
	else if (argu == 'X')
		print_x = ft_puthex(num, hex_upper);
	return (print_x);
}
