/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:09:34 by kmahdi            #+#    #+#             */
/*   Updated: 2022/11/23 22:50:00 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_check(char a, va_list s)
{
	int	i;

	i = 0;
	if (a == '%')
		i += ft_putchar('%');
	else if (a == 'c')
		i += ft_putchar(va_arg(s, int));
	else if (a == 'd' || a == 'i')
		i += ft_putnbr(va_arg(s, int));
	else if (a == 's')
		i += ft_putstr(va_arg(s, char *));
	else if (a == 'p')
	{
		i += ft_putstr("0x");
		i += ft_hex(va_arg(s, unsigned long));
	}
	else if (a == 'u')
		i += ft_unsg(va_arg(s, unsigned int));
	else if (a == 'X')
		i += ft_hex_up(va_arg(s, unsigned int));
	else if (a == 'x')
		i += ft_hex(va_arg(s, unsigned int));
	return (i);
}
