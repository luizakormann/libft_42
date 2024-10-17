/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:22:30 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/17 19:06:21 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	size_t	dlen;
	size_t	i;
	size_t	j;

	dlen = (ft_strlen(dst) -1);
	d = dst;
	i = 0;
	j = 0;
	while (i < dlen)
	{
		d[i] = dst[i];
		i++;
	}
	while (j < size && src[j] != '\0')
	{
		d[++i] = src[j];
		j++;
	}
	d[++i] = '\0';
	return (i);
}
