/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:23:05 by sabra             #+#    #+#             */
/*   Updated: 2020/11/27 16:41:52 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

s_struct	struct_init(void)
{
	s_struct flgs;

	flgs.minus = 0;
	flgs.zero = 0;
	flgs.width = 0;
	flgs.dot_star = 0;
	flgs.lenght = 0;
	return (flgs);
}

void		ft_parser(char *str)
{
	s_struct flgs;
	int len;
	int i;

	i = 0;
	flgs = struct_init();
	while (str[i])
	{
		
		i++;
	}

}

int			ft_write_start(char *str)
{
	size_t count;

	while (*str)
	{
		if (*str == '%')
		{
			ft_parser(&str);
			return (count);
		}
		ft_putchar_fd(1, *str);
		count++;
	}
	return (count);
}

