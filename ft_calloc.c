/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmiraill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:06:06 by fmiraill          #+#    #+#             */
/*   Updated: 2019/11/11 15:47:57 by fmiraill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * (nmemb * size))))
		return (0);
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}
