/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:30:53 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/22 22:03:03 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	chr;
	unsigned char	size;
	size_t			i;

	str = (char *)s;
	chr = (unsigned char)c;
	size = (unsigned char)n;
	i = 0;
	while (i < size || str[i] != '\0')
	{
		if ((unsigned char)str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
