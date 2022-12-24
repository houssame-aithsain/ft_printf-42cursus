/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:33:45 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/10/26 18:41:09 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_input(va_list input, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(input, int));
	else if (c == 's')
		len += ft_putstr(va_arg(input, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(input, int));
	else if (c == 'p')
		len += ft_phex(va_arg(input, unsigned long long),
				"0123456789abcdef");
	else if (c == 'x')
		len += ft_xhex(va_arg(input, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_xhex(va_arg(input, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		len += ft_putnbru(va_arg(input, unsigned int));
	else
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	input;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(input, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_check_input(input, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(input);
	return (len);
}
