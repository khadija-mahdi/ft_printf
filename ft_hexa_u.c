/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:19 by kmahdi            #+#    #+#             */
/*   Updated: 2022/11/23 22:49:17 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_hex_up(unsigned int n)
{
	char	*p;
	int		nbr;

	nbr = 0;
	p = "0123456789ABCDEF";
	if (n < 16)
	{
		nbr += ft_putchar(p[n]);
	}
	else if (n >= 16)
	{
		nbr += ft_hex_up (n / 16);
		nbr += ft_hex_up (n % 16);
	}
	return (nbr);
}
