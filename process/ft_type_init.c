/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:53:09 by sabra             #+#    #+#             */
/*   Updated: 2020/11/29 11:53:11 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_processor.h"

int     ft_type_init(s_struct flgs, va_list args)
{
    int count;

    count = 0;
    if (flgs.type == 'c')
        count = ft_c_type(flgs, args);
    else if (flgs.type == 's')
    	count = ft_s_type(flgs, args);
    else if (flgs.type == 'p')
    	count = ft_p_type(flgs, args);
    else if (flgs.type == 'd' || flgs.type == 'i')
    	count = ft_di_type(flgs, args);
    else if (flgs.type == 'u')
    	count = ft_u_type(flgs, args);
    else if (flgs.type == 'x')
    	count = ft_dwx_type(flgs, args);
    else if (flgs.type == 'X')
    	count = ft_upx_type(flgs, args);
    else if (flgs.type == '%')
	{
    	count = 1;
    	ft_putchar_fd('%', 1);
	}
    return (count);
}
