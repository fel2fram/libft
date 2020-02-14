/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:04:34 by fde-fram          #+#    #+#             */
/*   Updated: 2019/10/08 19:56:40 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
				void (*del)(void *))
{
	t_list	*res;
	t_list	*rescopy;

	if (!lst)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	rescopy = res;
	while (lst->next)
	{
		if (!(res->next = ft_lstnew((*f)((lst->next)->content))))
		{
			ft_lstclear(&rescopy, del);
			return (NULL);
		}
		res = res->next;
		lst = lst->next;
	}
	return (rescopy);
}
