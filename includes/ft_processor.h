/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:48:09 by sabra             #+#    #+#             */
/*   Updated: 2020/11/29 11:48:13 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESSOR_H
# define FT_PROCESSOR_H

# include "printf.h"

int		ft_type_init(t_struct flgs, va_list args);
int		ft_c_type(t_struct flgs, va_list args);
int		ft_s_type(t_struct flgs, va_list args);
int		ft_p_type(t_struct flgs, va_list args);
int		ft_di_type(t_struct flgs, va_list args);
int		ft_u_type(t_struct flgs, va_list args);
int		ft_dwx_type(t_struct flgs, va_list args);
int		ft_upx_type(t_struct flgs, va_list args);

#endif
