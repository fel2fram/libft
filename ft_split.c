/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 06:04:37 by fde-fram          #+#    #+#             */
/*   Updated: 2019/11/09 18:17:55 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_stren(char *str, char c, int i)
{
	int a;

	a = 0;
	while (str[i] != c && str[i])
	{
		i++;
		a++;
	}
	return (a);
}

static int	ft_count(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] == c && str[i + 1] != c) || (i == 0 && str[i] != c))
			count++;
		if (str[i] == c && str[i + 1] == '\0')
			count--;
		i++;
	}
	return (count);
}

static int	supprtout(int a, char **tab)
{
	while (--a >= 0)
		free(tab[a]);
	free(tab);
	return (1);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		a;
	int		o;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	a = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_count((char *)s, c) + 1))))
		return (NULL);
	while (s[i] && !(o = 0))
	{
		while (s[i] == c)
			i++;
		if (!(tab[a] = malloc(sizeof(char) * (ft_stren((char *)s, c, i) + 1)))
		&& supprtout(a, tab))
			return (NULL);
		while (s[i] != c && s[i])
			tab[a][o++] = s[i++];
		if (s[i - 1] != c)
			tab[a++][o] = '\0';
	}
	tab[a] = 0;
	return (tab);
}
