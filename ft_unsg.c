/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:12:12 by kmahdi            #+#    #+#             */
/*   Updated: 2022/11/21 17:36:33 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsg(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 0 && n < 10)
	{
		ft_putchar ((n + 48));
		len++;
	}
	else
	{
		len += ft_unsg (n / 10);
		len += ft_unsg (n % 10);
	}
	return (len);
}