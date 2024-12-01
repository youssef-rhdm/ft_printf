/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:11:15 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/01 11:34:00 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "./libft/libft.h"
#include  "libftprintf.h"
#include <libc.h>


int ft_printf(const char *string,...)
{
	va_list arg_list;

	va_start(arg_list,string);

	while (*string != '%')
	{
		ft_putchar(*string);
		string++;
	}
	if (*(string+1) =='d')
	{
		int n = va_arg(arg_list,int);
		ft_putnbr(n);
	}
	if (*(string+1) =='d')
	{
		int n = va_arg(arg_list,int);
		ft_putnbr(n);
	}
	va_end(arg_list);
	return 0;
}



int main(int argc, char const *argv[])
{
	// ft_printf("Hello habibi %d%%",45);
	// printf("Hello, my name is %s, I'm %d years old \n My Name starts with %c , my name's address is %p \n I weigh %f Kilograms and stand at %i meters.","Sarah",26,'c',&"Sarah", 57.89,178);
	ft_printf("Hello, my name is %s, I'm %d years old \n My Name starts with %c , my name's address is %p \n I weigh %f Kilograms and stand at %i meters.","Sarah",26,'c',&"Sarah", 57.89,178);
	return 0;
}
