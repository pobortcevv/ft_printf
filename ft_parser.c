/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:23:05 by sabra             #+#    #+#             */
/*   Updated: 2020/11/26 20:30:43 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_parser(char *str)
{
	size_t count;

	while (str[count])
	{
		if (str[count] == '%')
		{
			return (count);
		}
		ft_putchar_fd(1, str[count]);
		count++;
	}
	return (count);
}