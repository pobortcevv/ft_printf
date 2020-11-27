/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:01:47 by sabra             #+#    #+#             */
/*   Updated: 2020/11/27 16:28:38 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

int	ft_printf(const char *input, ...)
{
	int	count;
	va_list args;

	va_start(args, input);
	if ((count = ft_parser()))
}