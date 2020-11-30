/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:44 by sabra             #+#    #+#             */
/*   Updated: 2020/11/28 11:42:50 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H

# include "printf.h"
# include "ft_processor.h"

s_struct	ft_minus_init(s_struct flgs);
s_struct	ft_width_init(const char *str, s_struct flgs, int i, va_list args);
s_struct	ft_dot_star_init(const char *str, s_struct flgs, int i, va_list args);

#endif