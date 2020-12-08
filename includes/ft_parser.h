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

t_struct	ft_minus_init(t_struct flgs);
t_struct	ft_width_init(const char *str, t_struct flgs, int i, va_list args);
t_struct	ft_dot_star_init(const char *str, t_struct flgs, int i, va_list
args);

#endif
