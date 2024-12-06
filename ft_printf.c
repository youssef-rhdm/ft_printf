/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:50:22 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/05 14:50:22 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:39:40 by yrhandou          #+#    #+#             */
/*   Updated: 2024/12/05 14:47:42 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_format(va_list va, const char *str, int *counter)
{
	if (*str == 's')
		counter += ft_putstr(va_arg(va, char *));
	else if (*str == 'c')
		counter += ft_putchar(va_arg(va, int));
	else if (*str == 'p')
		counter += ft_putstr("POINTER");
	else if (*str == 'd')
		counter += ft_putnbr(va_arg(va, int));
	else if (*str == 'i')
		counter += ft_putnbr(va_arg(va, int));
	else if (*str == 'u')
		counter += ft_putnbr(va_arg(va, int));
	else if (*str == 'x')
		counter += ft_puthex(va_arg(va, unsigned int), 1);
	else if (*str == 'X')
		counter += ft_putstr("UPPER HEX");
	else if (*str == '%')
		counter += ft_putchar('%');
	return *counter;
}

// int ft_printf_old(const char *str, ...)
// {
// 	va_list va;
// 	int i;
// 	int count;

// 	i = 0;
// 	count = 0;
// 	va_start(va, str);
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == '%')
// 			count = check_format(va, &str[++i], &count);
// 		else
// 			ft_putchar(str[i]);
// 		i++;
// 		count++;
// 	}
// 	va_end(va);
// 	return (i);
// }

int ft_printf(const char *str, ...)
{
	int counter;
	int	i;
	va_list	va;
	i = 0;

	counter = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i]=='%')
		{
			counter += check_format(va ,&str[++i], &counter);
			i++;
		}
		counter+= ft_putchar(str[i]);
		i++;
	}
	return counter;
}
#include <libc.h>

int main(void)
{
	char str[] = "Sarah";
	printf("------------------\n");
	printf("Hello, my name is %s, I'm %d years old , My Name starts with %c , my name's address is %p  .\n", str, 26, str[0], &str[0]);
	printf("------------------\n");
	ft_printf("Hello, my name is %s, I'm %d years old , My Name starts with %c , my name's address is %p  .\n", str, 26, str[0], &str[0]);
	printf("------------------\n");

	return 0;
}
