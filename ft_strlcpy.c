/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 22:46:30 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/16 19:05:35 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*s;
	size_t	sizes;

	i = 0;
	s = (char *)src;
	sizes = ft_strlen(s);
	if (size == 0)
		return (sizes);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sizes);
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
	char	d[50];
	char	s[70];

	ft_strcpy(s, "Cp 15 positions not this part.");
	ft_strlcpy(d, s, 15);
	return (0);
}
