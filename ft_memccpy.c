/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmiraill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:22:07 by fmiraill          #+#    #+#             */
/*   Updated: 2019/11/05 16:56:26 by fmiraill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (tmpsrc[i] == (unsigned char)c)
		{
			tmpdst[i] = tmpsrc[i];
			return ((void *)&dst[i + 1]);
		}
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (0);
}
