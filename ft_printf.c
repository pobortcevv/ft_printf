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

//int		main(void)
//{
//	int my;
//	int or;
//	char	*n = "abcdefghijklmnop";
//	char	*o = "-a";
//	char	*p = "-12";
//	char	*q = "0";
//	char	*r = "%%";
//	char	*s = "-2147483648";
//	char	*t = "0x12345678";
//	char	*u = "-0";
//	int		a = -2;
//
//	my = ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
//	or = printf("\n%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s", a, n, a, o, a, p,
//			 a, q, a, r, a, s, a, t, a, u);
//	printf("\nmy = %d\nor = %d", my, or - 1);
//}