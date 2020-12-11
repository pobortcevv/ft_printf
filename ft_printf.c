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
	int		count;
	char	*str;
	va_list	args;

	str = ft_strdup((char *)input);
	va_start(args, input);
	count = ft_write_common(str, args, 0);
	va_end(args);
	free(str);
	return (count);
}

//int main (void)
//{
//	int my;
//	//int or;
//
////	int		d = 2147483647;
////	int		a = 0;
////	int		e = -2147483648;
////	int		f = 42;
////	int		g = 25;
////	int		h = 4200;
////	int		i = 8;
////	int		j = -12;
////	int		k = 123456789;
////	int		l = 0;
////	int		m = -12345678;
////	char	c = 'a';
////	char	*n = "abcdefghijklmnop";
////	char	*o = "-a";
////	char	*p = "-12";
////	char	*q = "0";
////	char	*r = "%%";
////	char	*s = "-2147483648";
////	char	*t = "0x12345678";
////	char	*u = "-0";
//
//	my = ft_printf("%.8s,\n", NULL);
//	int or = printf("%.8s,\n", NULL);
////	printf("/");
//	printf("\nmy = %d", my);
//	printf("\nor = %d", or);
//	return (0);
//}