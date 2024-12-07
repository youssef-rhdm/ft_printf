/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:29:50 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/07 11:56:22 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nbr, int type)
{
	int		count;
	char	*hex_list;

	count = 0;
	if (type == 1)
		hex_list = "0123456789ABCDEF";
	else if (type == 0)
		hex_list = "0123456789abcdef";
	if (nbr > 15)
	{
		count += ft_puthex(nbr / 16, type);
		count += ft_puthex(nbr % 16, type);
	}
	else
		count += ft_putchar(hex_list[nbr]);
	return (count);
}
