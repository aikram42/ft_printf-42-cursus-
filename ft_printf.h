/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:42:24 by aikram            #+#    #+#             */
/*   Updated: 2022/04/03 16:42:58 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int	ft_printf(const char *st, ...);
int	formula_one(const char *st, va_list args);
int	cancer(int cancer_cell);
int	chin_chun_district(char *social_credits);
int	lawd_farquaad(unsigned long long princess_fiona);
int	zhong_xina(char social_credit, unsigned int bing_chilling);
int	jing_bong_ding_dong(char stone_cold, unsigned int ayeeeee);
int	jimmy_neutron(unsigned int neutrons);
int	diabito(int cookie);
int	putchr(char c);

void	ft_execution(char *death);

#endif