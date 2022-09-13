/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:28:53 by jaekim            #+#    #+#             */
/*   Updated: 2022/02/05 17:07:45 by jaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	printf(const char *argu, ...);
int	ft_check(int r_printf, const char *argu, va_list ap);
int	ft_form_check(int *index, const char *argu, va_list ap);
int	ft_put_c(char c);
int	ft_put_s(char *str);
int	ft_put_d_i(int num);
int	ft_putnbr(long long num);
int	ft_put_u(unsigned int num);
int	ft_puthex(size_t num, char *str);
int	ft_put_x(unsigned int num, char argu);
int	ft_putchar_fd(char c, int fd);
int	ft_put_p(size_t num);

#endif
