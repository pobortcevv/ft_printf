/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:23:05 by sabra             #+#    #+#             */
/*   Updated: 2020/11/28 14:02:54 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"
#include "../includes/ft_parser.h"

s_struct	struct_init(void)
{
	s_struct flgs;

	flgs.minus = 0;
	flgs.zero = 0;
	flgs.width = 0;
	flgs.dot_star = 0;
	flgs.lenght = 0;
	flgs.type = '\0';
	return (flgs);
}

void		ft_parser(const char *str, int i, va_list args)
{
	s_struct flgs;
	
	flgs = struct_init();
	while (flgs.type == '\0')
	{
		if (str[i] == '0' && flgs.minus == 0)
			flgs.zero = 1;
		else if (str[i] == '-')
			flgs = ft_minus_init(flgs);
        else if (str[i] == '.')
            flgs = ft_dot_star_init(str, flgs, i, args);
		else if (((str[i] >= 1 && str[i] <= '9') || str[i] == '*')&& flgs.dot_star == 0)
			flgs = ft_width_init(str, flgs, i, args);
		else if (ft_isalpha(str[i]))
			flgs.type = str[i];
		i++;
    }
    flgs.lenght = flgs.width + flgs.dot_star;
    // Здесь будет функция обработки флагов
    // А здесь уже будет функция ft_write_common
	printf("\nminus = %d\nzero = %d\nwidth = %d\ndot_star = %d\nlen = %d\ntype = %c",
        flgs.minus, flgs.zero, flgs.width, flgs.dot_star, flgs.lenght, flgs.type);
}

int			ft_write_common(const char *str, va_list args, int i)
{
	int 	count;

	count = 0;
	while (str[i] != '\0')
    {
		if (str[i] == '%')
        {
			ft_parser(str, i, args);
			return (count);
		}
		ft_putchar_fd(str[i], 1);
		count++;
		i++;
	}
	return (count);
}

