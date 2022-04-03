/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amougus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:13:50 by aikram            #+#    #+#             */
/*   Updated: 2022/04/03 16:22:10 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cancer(int cancer_cells)
{
	write(1, &cancer_cells, 1);
	return (1);
}

int	chin_chun_district(char *social_credits)
{
	if (!social_credits)
	{
		ft_execution("(null)");
		return (6);
	}
	ft_putstr_fd(social_credits, 1);
	return (ft_strlen(social_credits));
}

void	ft_execution(char *death)
{
	ft_putstr_fd(death, 1);
}

int	lawd_farquaad(unsigned long long princess_fiona)
{
	char	*a;
	int		i;

	a = "0123456789abcdef";
	i = 1;
	if (princess_fiona > 15)
	{
		i += lawd_farquaad(princess_fiona / 16);
		lawd_farquaad(princess_fiona % 16);
	}
	else
		ft_putchar_fd(a[princess_fiona], 1);
	return (i);
}
