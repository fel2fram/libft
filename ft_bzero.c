/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmiraill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:06:06 by fmiraill          #+#    #+#             */
/*   Updated: 2019/11/05 16:14:11 by fmiraill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bzer;
	unsigned int	i;

	i = 0;
	bzer = (unsigned char*)s;
	while (i < n)
	{
		bzer[i] = '\0';
		i++;
	}
}
