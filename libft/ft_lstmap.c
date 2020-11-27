/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngragas <ngragas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 21:07:53 by ngragas           #+#    #+#             */
/*   Updated: 2020/11/20 21:27:36 by ngragas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cur;

	new = NULL;
	while (lst)
	{
		cur = ft_lstnew(f(lst->content));
		if (!cur)
		{
			while (new)
			{
				cur = new;
				del(cur->content);
				new = cur->next;
				free(cur);
			}
			return (NULL);
		}
		ft_lstadd_back(&new, cur);
		lst = lst->next;
	}
	return (new);
}
