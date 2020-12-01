/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:25:59 by sabra             #+#    #+#             */
/*   Updated: 2020/11/29 14:26:06 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_processor.h"

int		ft_s_type(s_struct flgs, va_list args)
{
	char	*str;
	int		count;

	str = va_arg(args, char *);
	if (flgs.dot_star >= 0)
	{
		count = flgs.dot_star;
	}
	else
	{
		count = ft_strlen(str);
	}
	flgs.width -= (count);
	if (flgs.minus == 1)
	{
		if (flgs.dot_star >= 0)
		{
			while ((flgs.dot_star)--)
			{
				ft_putchar_fd(*str, 1);
				(flgs.width)--;
				str++;
			}
		}
		else
		{
			ft_putstr_fd(str, 1);
			flgs.width -= ft_strlen(str);
		}
	}
	count = (flgs.width > 0 ? count + flgs.width : count);
	while (flgs.width > 0)
	{
		ft_putchar_fd(' ', 1);
		(flgs.width)--;
	}
	if (flgs.minus == 0)
	{
		if (flgs.dot_star >= 0)
		{
			while ((flgs.dot_star)-- > 0)
			{
				ft_putchar_fd(*str, 1);
				str++;
			}
		}
		else
			ft_putstr_fd(str, 1);
	}
	return (count);
}

int		ft_c_type(s_struct flgs, va_list args)
{
	int count;

	count = 1;
	if (flgs.minus == 1)
	{
		ft_putchar_fd(va_arg(args, int), 1);
		(flgs.width)--;
	}
	count = (flgs.width > count ? flgs.width : count);
	while (flgs.width > 1)
	{
		ft_putchar_fd(' ', 1);
		(flgs.width)--;
	}
	if (flgs.minus == 0)
		ft_putchar_fd(va_arg(args, int), 1);
	return (count);
}

