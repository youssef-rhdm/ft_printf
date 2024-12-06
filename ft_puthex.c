/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:29:50 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/06 17:00:35 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_digits(unsigned int nbr)
{
	int count;

	count = 1;
	while (nbr / 10 != 0)
	{
		count++;
	}
	return (count);
}
void ft_puthex_upper_old(unsigned int nbr)
{
	int counter;
	char *hex_list;
	char remainders[16];
	int digits;

	digits = count_digits(nbr);
	counter = 0;
	hex_list = "0123456789ABCDEF";
	while (nbr / 16 != 0)
	{
		remainders[digits] = hex_list[nbr % 16];
		nbr = nbr / 16;
		digits--;
	}
	remainders[digits] = hex_list[nbr % 16];
	digits = 0;
	while (remainders[digits])
	{
		ft_putchar(remainders[digits] + '0');
		digits++;
	}
}
int ft_puthex(unsigned int nbr, int type)
{
	int count;
	char *hex_list;

	count = 0;
	if (type == 1)
		hex_list = "0123456789ABCDEF";
	else
		hex_list = "0123456789abcdef";
	while (nbr > 16)
	{
		count += ft_puthex(nbr % 16, type);
		nbr = nbr / 16;
	}
	if (nbr <= 9)
		count = ft_putchar(hex_list[nbr]);
	else if (nbr > 9)
	{
		count += ft_putchar(hex_list[nbr]);
	}
	return count;
}
