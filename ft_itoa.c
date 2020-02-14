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

char	*ft_itoa(int a)
{
	int		m;
	int		i;
	char	*retour;
	long	n;

	n = a;
	m = n;
	i = 0;
	if (m <= 0)
		i++;
	while (m && ++i)
		m = m / 10;
	if (!(retour = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
		retour[0] = '-';
	n = (n > 0 ? n : -n);
	retour[i] = '\0';
	if (n == 0)
		retour[0] = '0';
	while (n && i-- && ((retour[i] = (n % 10) + '0') || 1))
		n = n / 10;
	return (retour);
}
