/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:33:50 by fde-fram          #+#    #+#             */
/*   Updated: 2019/08/01 18:39:54 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	belong(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		debut;
	int		fin;
	char	*res;

	i = 0;
	debut = 0;
	fin = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[debut] && belong(s1[debut], set))
		debut++;
	while (s1[i])
		i++;
	fin = i - 1;
	while (belong(s1[fin], set) && fin > 0)
		fin--;
	if (!(res = malloc(sizeof(char) * ((fin >= debut) ? fin - debut + 2 : 1))))
		return (NULL);
	i = -1;
	while (debut + (++i) <= fin)
		res[i] = s1[i + debut];
	res[i] = '\0';
	return (res);
}
