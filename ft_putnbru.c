/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:48:20 by hait-hsa          #+#    #+#             */
/*   Updated: 2023/02/20 21:37:56 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int n)
{
	int	len;

	len = 0;
	len = ft_count_numb(n);
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	if (n > 9)
	{
		ft_putnbru(n / 10);
		ft_putnbru(n % 10);
	}
	return (len);
}
