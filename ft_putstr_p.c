/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:08:55 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/01 13:12:19 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr_p(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '%')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}