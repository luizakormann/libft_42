/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:14:39 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/23 21:22:41 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_libft.h"

int	spaces(const char *nptr)
{
	size_t	i;

	i = 0;
	while (nptr[i] == ' ')
	{
		i++;
	}
	return (i);
}

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
	if (nptr[i] == '-')
	{
		sig *= -1;
		i++;
	}
	if (ft_isdigit(nptr[i]) == 0)
		return (0);
	while (ft_isdigit(nptr[i]) != 0 && nptr[i] != '\0')
	{
		num = nptr[i] - 48;
		res = res * 10 + num;
		i++;
	}
	return (res * sig);
}
