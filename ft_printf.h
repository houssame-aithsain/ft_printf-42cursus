/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <hait-hsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:57:18 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/10/26 18:41:32 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putstr(const char *str);
int		ft_putchar(char c);
int		ft_count_numb(long int n);
int		ft_phex(unsigned long int n, char *arr);
int		ft_xhex(unsigned int n, char *arr);
int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_putnbru(unsigned int n);
void	ft_pxx(unsigned long int n, char *arr);
int		count_numb_hex(unsigned long int n);
#endif