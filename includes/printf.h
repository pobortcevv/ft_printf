/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:02:25 by sabra             #+#    #+#             */
/*   Updated: 2020/11/28 13:52:16 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
# include <stdio.h>

typedef struct		s_struct
{
	int		minus;
	int		zero;
	int		width;
	int		dot_star;
	int		lenght;
	char	type;
}					t_struct;

int					ft_write_common(const char *str, va_list args, int i);

#endif
