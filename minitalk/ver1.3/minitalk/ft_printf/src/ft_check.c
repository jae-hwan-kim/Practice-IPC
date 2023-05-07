/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:27:41 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/05 17:15:34 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int r_printf, const char *argu, va_list ap)
{
	int	index;

	index = 0;
	while (argu[index] != '\0')
	{
		if (argu[index] != '%')
			r_printf += ft_putchar_fd(argu[index], 1);
		else if (argu[index] == '%')
		{
			index++;
			r_printf += ft_form_check(&index, argu, ap);
		}
		index++;
	}
	return (r_printf);
}
