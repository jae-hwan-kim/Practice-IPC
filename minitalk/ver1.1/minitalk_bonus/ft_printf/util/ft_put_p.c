/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:31:18 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/03 17:51:25 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_put_p(size_t num)
{
	unsigned int	print_p;
	char			*hex;

	hex = "0123456789abcdef";
	print_p = 0;
	print_p += write(1, "0x", 2);
	print_p += ft_puthex(num, hex);
	return (print_p);
}
