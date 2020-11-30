/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:33:27 by sabra             #+#    #+#             */
/*   Updated: 2020/11/30 22:33:28 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

void 	ft_putnull_X(int len)
{
	while (len--)
		ft_putchar_fd('0', 1);
}

int		ft_dot_star_X(unsigned int num, s_struct flgs, int count)
{
	flgs.dot_star -= count;
	count += (flgs.width + flgs.dot_star);
	flgs.width -= flgs.dot_star;
	if (flgs.minus == 1)
	{
		ft_putnull_X(flgs.dot_star);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	while (flgs.width > 0)
	{
		ft_putchar_fd(' ', 1);
		flgs.width--;
	}
	if (flgs.minus == 0)
	{
		ft_putnull_X(flgs.dot_star);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	return (count);
}

int		ft_X_type(s_struct flgs, va_list args)
{
	int count;
	unsigned int num;
	unsigned int buff;

	count = 0;
	num = va_arg(args, unsigned int);
	buff = num;
	while (buff > 1)
	{
		buff /= 16;
		count++;
	}
	flgs.width -= count;
	if (flgs.dot_star != 0)
	{
		count += ft_dot_star_X(num, flgs, count);
		return (count);
	}
	if (flgs.minus == 1)
	{
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
		while ((flgs.width)--)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		ft_putnull_X(flgs.width);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	else
	{
		while ((flgs.width)--)
			ft_putchar_fd(' ', 1);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	return (count);
}
