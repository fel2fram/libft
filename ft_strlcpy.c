/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmiraill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:45:40 by fmiraill          #+#    #+#             */
/*   Updated: 2019/11/08 19:16:29 by fmiraill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t index;

	i = 0;
	index = 0;
	if (src == NULL)
		return (0);
	while (src[index])
		index++;
	if (dstsize > 1)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (dstsize >= 1)
		dst[i] = '\0';
	return (index);
}
