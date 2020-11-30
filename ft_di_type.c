/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:45:21 by sabra             #+#    #+#             */
/*   Updated: 2020/11/30 16:45:23 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int 	ft_putnull(int num, int len)
{
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', 1);
	}
	while (len--)
		ft_putchar_fd('0', 1);
	return (num);
}

int		ft_dot_star_di(int num, s_struct flgs, int count)
{
	flgs.dot_star -= (count - 1);
	count += (flgs.width + flgs.dot_star);
	flgs.width -= flgs.dot_star;
	if (flgs.minus == 1)
	{
		num = ft_putnull(num, flgs.dot_star);
		ft_putnbr_fd(num, 1);
	}
	while (flgs.width > 0)
	{
		ft_putchar_fd(' ', 1);
		flgs.width--;
	}
	if (flgs.minus == 0)
	{
		num = ft_putnull(num, flgs.dot_star);
		ft_putnbr_fd(num, 1);
	}
	return (count);
}

int		ft_di_type(s_struct flgs, va_list args)
{
	int count;
	int num;
	int buff;

	count = 0;
	num = va_arg(args, int);
	buff = num;
	if (buff < 0)
	{
		buff *= -1;
		count++;
	}
	while (buff > 0)
	{
		buff /= 10;
		count++;
	}
	flgs.width -= count;
	if (flgs.dot_star != 0)
	{
		count += ft_dot_star_di(num, flgs, count);
		return (count);
	}
	if (flgs.minus == 1)
	{
		ft_putnbr_fd(num, 1);
		while ((flgs.width)--)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		num = ft_putnull(num, flgs.width);
		ft_putnbr_fd(num, 1);
	}
	else
	{
		while ((flgs.width)--)
			ft_putchar_fd(' ', 1);
		ft_putnbr_fd(num, 1);
	}
	return (count);
}
