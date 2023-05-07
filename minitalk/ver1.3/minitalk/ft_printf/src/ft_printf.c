/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:27:27 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/01 09:27:32 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *argu, ...)
{
	int		r_printf;
	va_list	ap;

	r_printf = 0;
	if (!argu)
		return (0);
	va_start (ap, argu);
	r_printf += ft_check(r_printf, argu, ap);
	va_end (ap);
	return (r_printf);
}
