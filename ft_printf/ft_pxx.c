/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pxx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:48 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/10/26 17:14:18 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pxx(unsigned long int n, char *arr)
{
	if (n > 0)
	{
		ft_pxx(n / 16, arr);
		write(1, &arr[n % 16], 1);
	}
}
