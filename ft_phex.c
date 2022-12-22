/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:33:04 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/10/26 17:06:24 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_phex(unsigned long int n, char *arr)
{
	if (n == 0)
		write(1, "0x0", 3);
	else
	{
		write(1, "0x", 2);
		ft_pxx(n, arr);
	}
	return (count_numb_hex(n) + 2);
}
