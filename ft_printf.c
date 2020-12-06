/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:01:47 by sabra             #+#    #+#             */
/*   Updated: 2020/11/28 13:49:09 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

int	ft_printf(const char *input, ...)
{
	int	count;

	va_list args;
	va_start(args, input);
	count = ft_write_common(input, args, 0);
	va_end(args);
	return (count);
}
//
//int		main(void)
//{
//	int my;
//	int or;
//
//	my = ft_printf("%05%");
//	or = printf("\n%05%");
//	printf("\nmy = %d\nor = %d", my, or - 1);
//}