/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:41:15 by sabra             #+#    #+#             */
/*   Updated: 2020/11/30 20:41:17 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes//ft_processor.h"

void 	ft_put_null_u(int len)
{
	while (len--)
		ft_putchar_fd('0', 1);
}

int		ft_dot_star_u(unsigned int num, s_struct flgs, int count)
{
	flgs.dot_star -= count;
	flgs.width -= flgs.dot_star;
	if (flgs.minus == 1)
	{
		ft_put_null_u(flgs.dot_star);
		if (num == 0 && flgs.dot_star == 0)
			return (count > flgs.lenght ? count : flgs.lenght);
		ft_putnbr16_fd(num, 1, "0123456789");
	}
	while (flgs.width > 0)
	{
		ft_putchar_fd(' ', 1);
		flgs.width--;
	}
	if (flgs.minus == 0)
	{
		ft_put_null_u(flgs.dot_star);
		if (num == 0 && flgs.dot_star == 0)
			return (count > flgs.lenght ? count : flgs.lenght);
		ft_putnbr16_fd(num, 1, "0123456789");
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}

int		ft_u_type(s_struct flgs, va_list args)
{
	int count;
	unsigned int num;
	unsigned int buff;

	count = 0;
	num = va_arg(args, unsigned int);
	buff = num;
	while (buff > 0)
	{
		buff /= 10;
		count++;
	}
	flgs.width -= count;
	if (flgs.dot_star >= 0)
	{
		count = ft_dot_star_u(num, flgs, count);
		return (count > flgs.lenght ? count : flgs.lenght);
	}
	if (flgs.minus == 1)
	{
		ft_putnbr16_fd(num, 1, "0123456789");
		while ((flgs.width)--)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		ft_put_null_u(flgs.width);
		ft_putnbr16_fd(num, 1, "0123456789");
	}
	else
	{
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
		ft_putnbr16_fd(num, 1, "0123456789");
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}
