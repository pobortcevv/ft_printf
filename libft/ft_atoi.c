/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:29:16 by ngragas           #+#    #+#             */
/*   Updated: 2020/11/21 14:21:47 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		num;
	char	sign;

	num = 0;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	sign = (*str == '-' || *str == '+') ? 44 - *str++ : 1;
	while ('0' <= *str && *str <= '9')
		num = num * 10 + sign * (*str++ - '0');
	return (num);
}

int main(void)
{
	int result;

	result = ft_atoi("-2147483649");
	printf("%d", result);
}