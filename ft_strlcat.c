/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:22:30 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/16 23:13:27 by lukorman         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, const char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char	d[30];
	char	s[30];

	ft_strcpy(d, "123456");
	ft_strcpy(s, "7890");
	ft_strlcat(d, s, 2);
	return (0);
}
