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

#include "../includes/ft_processor.h"

int 	ft_putnull(int num, int len)
{
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', 1);
	}
	if (len > 1)
	{
		while (len--)
			ft_putchar_fd('0', 1);
	}
	return (num);
}

int		ft_dot_star_di(int num, s_struct flgs, int count)
{
	if (num < 0)
		flgs.dot_star -= (count - 1);
	else
		flgs.dot_star -= count;
	if (flgs.dot_star >= 0)
		flgs.width -= flgs.dot_star + count;
	else
		flgs.width -= count;
	if (num < 0 && flgs.lenght > count && flgs.width < flgs.dot_star)
		flgs.lenght++;
	if (flgs.minus == 1)
	{
		num = ft_putnull(num, flgs.dot_star);
		if (num != 0 || flgs.dot_star > 0)
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
		if (num == 0 && flgs.dot_star <= 0)
			return (flgs.lenght);
		ft_putnbr_fd(num, 1);
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}

int		ft_di_type(s_struct flgs, va_list args)
{
	int count;
	int num;
	int buff;

	count = 0;
	num = va_arg(args, int);
	if (num == 0 && flgs.dot_star != 0)
		count = 1;
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
	if (flgs.dot_star >= 0)
	{
		count = ft_dot_star_di(num, flgs, count);
		return (count > flgs.lenght ? count : flgs.lenght);
	}
	flgs.width -= count;
	if (flgs.minus == 1)
	{
		ft_putnbr_fd(num, 1);
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		num = ft_putnull(num, flgs.width);
		ft_putnbr_fd(num, 1);
	}
	else
	{
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
		ft_putnbr_fd(num, 1);
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}
