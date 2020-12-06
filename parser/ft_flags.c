/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 16:26:23 by sabra             #+#    #+#             */
/*   Updated: 2020/11/28 11:42:31 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parser.h"

s_struct	ft_minus_init(s_struct flgs)
{
	flgs.minus = 1;
	flgs.zero = 0;
	return (flgs);
}

s_struct	ft_width_init(const char *str, s_struct flgs, int i, va_list args)
{
	if (ft_isdigit(str[i]))
	{
		flgs.width = ft_atoi(&str[i]);

	}
	else if (str[i] == '*')
	{
		flgs.width = va_arg(args, int);
		if (flgs.width < 0)
			flgs.width *= -1;

	}
	return (flgs);
}

s_struct	ft_dot_star_init(const char *str, s_struct flgs, int i, va_list args)
{
	int dot;

	if (ft_isdigit(str[++i]))
	{
		flgs.dot_star = ft_atoi(&str[i]);
	}
	else
	{
		dot = va_arg(args, int);
		if (dot < 0)
			flgs.minus = 1;
		flgs.dot_star = dot;
	}
	return (flgs);
}