/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man_xray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@cudent.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:59:09 by aikram            #+#    #+#             */
/*   Updated: 2022/03/14 21:42:42 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	zhong_xina(char social_credit, unsigned int bing_chilling)
{
	int	just_chilling;

	just_chilling = 0;
	if (social_credit == 'X' || social_credit == 'x')
		just_chilling = jing_bong_ding_dong(social_credit, bing_chilling);
	else
		just_chilling = jimmy_neutron(bing_chilling);
	return (just_chilling);
}

int	jing_bong_ding_dong(char stone_cold, unsigned int ayeeeee)
{	
	char	*a;
	int		i;

	i = 1;
	if (stone_cold == 'X')
		a = "0123456789ABCDEF";
	else
		a = "0123456789abcdef";
	if (ayeeeee > 15)
		i += jing_bong_ding_dong(stone_cold, ayeeeee / 16);
	ayeeeee %= 16;
	ft_putchar_fd(a[ayeeeee], 1);
	return (i);
}

int	jimmy_neutron(unsigned int neutrons)
{
	int	electrons;

	electrons = 1;
	if (neutrons > 9)
		electrons += jimmy_neutron(neutrons / 10);
	neutrons %= 10;
	ft_putchar_fd(neutrons + 48, 1);
	return (electrons);
}

int	diabito(int cookie)
{
	int	roll_back_to_kitchen;

	roll_back_to_kitchen = 0;
	ft_putnbr_fd(cookie, 1);
	if (cookie == -2147483648)
	{
		cookie = 214748364;
		roll_back_to_kitchen += 2;
	}
	if (cookie < 0)
	{
		cookie *= -1;
		roll_back_to_kitchen++;
	}
	if (cookie == 0)
		return (1);
	while (cookie > 0)
	{
		cookie /= 10;
		roll_back_to_kitchen++;
	}
	return (roll_back_to_kitchen);
}
