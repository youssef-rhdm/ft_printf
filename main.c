/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:11:15 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/06 17:00:35 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <libc.h>

int check_format()
{

}






int ft_printf(const char *string, ...)
{
	va_list arg_list;
	char *str;
	int n;
	int i;
	int num;

	i = 0;
	num = 0;
	va_start(arg_list, string);
	while (string[i] != '\0')
	{

		if (string[i] == '%')
		{
			if (string[i + 1] == 's')
			{
				str = va_arg(arg_list, char *);
				num += ft_putstr(str);
			}
			if (string[i + 1] == 'd')
			{
				n = va_arg(arg_list, int);
				num += ft_putnbr(n);
			}
		}
		num += ft_putchar(string[i]);
		i++;
	}
	va_end(arg_list);
	return (i);
}

int main(int argc, char const *argv[])
{
	// printf("%d",printf("HELLO %s","amin"));
	// printf("Hello, my name is %s, I'm %d years old \n My Name starts with %c , my name's address is %p \n I weigh %f Kilograms and stand at %i meters.","Sarah",26,'c',&"Sarah", 57.89,178);
	ft_printf("Hello, my name is %s,", "Sarah");
	return 0;
}
