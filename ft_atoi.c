/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:14:39 by lukorman          #+#    #+#             */
/*   Updated: 2024/11/04 21:29:15 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	spaces(const char *nptr);

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		res;
	int		num;
	int		sig;

	i = spaces(nptr);
	res = 0;
	num = 0;
	sig = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sig *= -1;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (ft_isdigit(nptr[i]) != 0 && nptr[i])
	{
		num = nptr[i] - 48;
		res = res * 10 + num;
		i++;
	}
	return (res * sig);
}

int	spaces(const char *nptr)
{
	size_t	i;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	return (i);
}
