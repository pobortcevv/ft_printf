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

long long		ft_put_null_di(long long num, int len)
{
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', 1);
	}
	while (len-- > 0)
		ft_putchar_fd('0', 1);
	return (num);
}

void			ft_put_spaces(t_struct flgs)
{
	while ((flgs.width)-- > 0)
		ft_putchar_fd(' ', 1);
}

int				ft_dot_star_di(long long num, t_struct flgs, int count)
{
	if (num < 0)
		flgs.dot_star -= (count - 1);
	else
		flgs.dot_star -= count;
	if (flgs.dot_star >= 0)
		flgs.width -= flgs.dot_star + count;
	else
		flgs.width -= count;
//	printf("%d\n", flgs.lenght);
//	printf("%d  <= %d\n", flgs.width, flgs.dot_star);
	if (num < 0 && flgs.width <= flgs.dot_star && flgs.width != 0)
		flgs.lenght++;
	if (flgs.minus == 1)
	{
		num = ft_put_null_di(num, flgs.dot_star);
		if (count != 0 || flgs.dot_star > 0)
			ft_putnbr_fd(num, 1);
	}

	ft_put_spaces(flgs);
	if (flgs.minus == 0)
	{
		num = ft_put_null_di(num, flgs.dot_star);
		if (flgs.dot_star <= 0 && count == 0)
			return (count > flgs.lenght ? count : flgs.lenght);
		ft_putnbr_fd(num, 1);
	}
	return (count > flgs.lenght ? count : flgs.lenght);
}

void			ft_null_dot_star_di(t_struct flgs, long long num)
{
	if (flgs.minus == 1)
	{
		ft_putnbr_fd(num, 1);
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else if (flgs.zero == 1)
	{
		num = ft_put_null_di(num, flgs.width);
		ft_putnbr_fd(num, 1);
	}
	else
	{
		while ((flgs.width)-- > 0)
			ft_putchar_fd(' ', 1);
		ft_putnbr_fd(num, 1);
	}
}

int				ft_di_type(t_struct flgs, va_list args, int count)
{
	long long	num;
	long long	buff;

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

	if (flgs.dot_star > -1)
	{

		count = ft_dot_star_di(num, flgs, count);
		return (count > flgs.lenght ? count : flgs.lenght);
	}
	flgs.width -= count;
	ft_null_dot_star_di(flgs, num);
	return (count > flgs.lenght ? count : flgs.lenght);
}
