/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:11:30 by yrhandou          #+#    #+#             */
/*   Updated: 2024/11/26 14:33:00 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);

#endif