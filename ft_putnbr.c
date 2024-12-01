/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:10:28 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/01 10:51:30 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int count_num(int num)
{
	int count;

	count = 1;
	while (num / 10 != 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

int ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	else if (n<0)
	{
		n *= -1;
		ft_putchar('-');
		ft_putnbr(n);
	}
	else if (n>9)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	else{
		ft_putchar(n+48);
	}
	return count_num(n);
}
