/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:27:29 by sabra             #+#    #+#             */
/*   Updated: 2020/11/29 14:27:31 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

void 	ft_put_null_p(int len)
{
	while (len-- > 0)
		ft_putchar_fd('0', 1);
}

int		ft_dot_star_p(unsigned long num, s_struct flgs, int count)
{
	flgs.dot_star -= (count - 2);
	flgs.width -= flgs.dot_star;
	flgs.lenght = (flgs.width > 0 ? flgs.lenght : flgs.lenght + 2);
	if (flgs.minus == 1)
	{
		write(1, "0x", 2);
		ft_put_null_p(flgs.dot_star);
		if (num == 0)
			return (flgs.lenght);
		ft_putnbr16_fd(num, 1, "0123456789abcdef");
	}
	while (flgs.width > 0)
	{
		ft_putchar_fd(' ', 1);
		flgs.width--;
	}
	if (flgs.minus == 0)
	{
		write(1, "0x", 2);
		ft_put_null_p(flgs.dot_star);
		if (num == 0)
			return (flgs.lenght);
		ft_putnbr16_fd(num, 1, "0123456789abcdef");
	}
	return (count >= flgs.lenght ? count : flgs.lenght);
}

int		ft_p_type(s_struct flgs, va_list args)
{
	int				count;
	unsigned long	buff;
	unsigned long	num;

	count = 2;
	num = va_arg(args, unsigned long);
	buff = num;
	while (buff > 0)
	{
		buff /= 16;
		count++;
	}
	flgs.width -= count;
	if (flgs.dot_star >= 0)
	{
		count = ft_dot_star_p(num, flgs, count);
		return (count >= flgs.lenght ? count : flgs.lenght);
	}
	if (flgs.minus == 1)
	{
		write(1, "0x", 2);
		ft_putnbr16_fd(num, 1, "0123456789abcdef");
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		ft_put_null_p(flgs.width);
		write(1, "0x", 2);
		ft_putnbr16_fd(num, 1, "0123456789abcdef");
	}
	else
	{
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
		write(1, "0x", 2);
		ft_putnbr16_fd(num, 1, "0123456789abcdef");
	}
	return (count >= flgs.lenght ? count : flgs.lenght);
}