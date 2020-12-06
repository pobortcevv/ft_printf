/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upx_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:26:05 by sabra             #+#    #+#             */
/*   Updated: 2020/12/04 14:26:07 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

void 	ft_put_null_upx(int len)
{
	while (len-- > 0)
		ft_putchar_fd('0', 1);
}

int		ft_dot_star_upx(unsigned int num, s_struct flgs, int count)
{
	flgs.dot_star -= count;
	if (flgs.dot_star >= 0)
		flgs.width -= flgs.dot_star;
	if (flgs.minus == 1)
	{
		ft_put_null_upx(flgs.dot_star);
		if (num != 0 || flgs.dot_star > 0)
			ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	while ((flgs.width)-- > 0)
		ft_putchar_fd(' ', 1);
	if (flgs.minus == 0)
	{
		ft_put_null_upx(flgs.dot_star);
		if (num == 0 && flgs.dot_star <= 0)
			return (count > flgs.lenght ? count : flgs.lenght);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}

int		ft_upx_type(s_struct flgs, va_list args)
{
	int count;
	unsigned int num;
	unsigned int buff;

	count = 0;
	num = va_arg(args, unsigned int);
	buff = num;
	while (buff > 0)
	{
		buff /= 16;
		count++;
	}
	if (num == 0 && flgs.dot_star != 0 && flgs.dot_star != -2)
		count = 1;
	flgs.width -= count;
	if (flgs.dot_star != -1)
	{
		count = ft_dot_star_upx(num, flgs, count);
		return (count);
	}
	if (flgs.minus == 1)
	{
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		ft_put_null_upx(flgs.width);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	else
	{
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
		ft_putnbr16_fd(num, 1, "0123456789ABCDEF");
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}
