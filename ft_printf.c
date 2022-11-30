/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:26:28 by kmahdi            #+#    #+#             */
/*   Updated: 2022/11/23 23:36:09 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		f;
	va_list	list;

	i = 0;
	f = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			f += ft_print_check(format[i], list);
		}
		else
		{
			ft_putchar(format[i]);
			f++;
		}
		i++;
	}
	va_end(list);
	return (f);
}
