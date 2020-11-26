/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:02:25 by sabra             #+#    #+#             */
/*   Updated: 2020/11/26 20:30:41 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct	s_struct
{
	int		minus;
	int		zero;
	int		width;
	int		dot_star;
	int		lenght;
}				my_str;

int		ft_printf(const char *, ...);
int		ft_parser(char *str);

#endif