/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:21:57 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/25 20:24:01 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lt_len;

	lt_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (lt_len > len)
		return (NULL);
	while (*big && len >= lt_len)
	{
		if (!ft_memcmp(big, little, lt_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
