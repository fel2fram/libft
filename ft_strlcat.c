/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmiraill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:04:45 by fmiraill          #+#    #+#             */
/*   Updated: 2019/11/13 13:42:01 by fmiraill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (src_len + size);
	index = 0;
	while (src[index] && ((dest_len + index) < size - 1))
	{
		dest[index + dest_len] = src[index];
		index++;
	}
	dest[index + dest_len] = '\0';
	return (dest_len + src_len);
}
