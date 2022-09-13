/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:32:52 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/02 17:02:30 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../src/ft_printf.h"

int	ft_putnbr(long long num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (num < 0)
	{
		num = -num;
		len += ft_putchar_fd('-', 1);
		len += ft_putnbr(num);
	}
	else if (num >= 10)
	{
		len += ft_putnbr(num / 10);
		len += ft_putnbr(num % 10);
	}
	else
		len += ft_putchar_fd(num + '0', 1);
	return (len);
}
