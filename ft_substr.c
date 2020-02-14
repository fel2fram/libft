/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:04:34 by fde-fram          #+#    #+#             */
/*   Updated: 2019/11/09 18:25:31 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
		size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		if (!(res = malloc(1 * sizeof(char))))
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (!(res = malloc((len + 1) * sizeof(char))))
		return (NULL);
	res[len] = '\0';
	while (i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	if (!s[start + i])
		res[i] = '\0';
	return (res);
}
