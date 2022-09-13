/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:31:59 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/03 17:53:24 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_puthex(size_t num, char *hex)
{
	unsigned int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_puthex(num / 16, hex);
		len += ft_puthex(num % 16, hex);
	}
	else
		len += ft_putchar_fd(hex[num], 1);
	return (len);
}
