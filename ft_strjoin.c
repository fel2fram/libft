/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:33:50 by fde-fram          #+#    #+#             */
/*   Updated: 2019/11/09 18:25:49 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*res;

	i = 0;
	a = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[a++] != '\0')
		i++;
	if (!(res = malloc((i + 1) * sizeof(char))))
		return (NULL);
	res[i] = '\0';
	i = 0;
	a = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[a])
		res[i++] = s2[a++];
	return (res);
}
