/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:27:55 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/05 17:47:00 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_check(int *index, const char *argu, va_list ap)
{
	if (argu[*index] == '%')
		return (ft_putchar_fd(argu[*index], 1));
	else if (argu[*index] == 'c')
		return (ft_put_c(va_arg(ap, int)));
	else if (argu[*index] == 's')
		return (ft_put_s(va_arg(ap, char *)));
	else if (argu[*index] == 'd' || argu[*index] == 'i')
		return (ft_put_d_i(va_arg(ap, int)));
	else if (argu[*index] == 'u')
		return (ft_put_u(va_arg(ap, unsigned int)));
	else if (argu[*index] == 'x' || argu[*index] == 'X')
		return (ft_put_x(va_arg(ap, int), argu[*index]));
	else if (argu[*index] == 'p')
		return (ft_put_p(va_arg(ap, size_t)));
	else
		--(*index);
	return (0);
}
