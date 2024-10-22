/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:40:08 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/22 19:40:09 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	*str;

	slen = ft_strlen(s);
	str = (char *)s;
	if ((unsigned char)c == '\0')
		return (str + slen);
	while (slen > 0)
	{
		slen--;
		if (str[slen] == (unsigned char)c)
			return (str + slen);
	}
	if (str[0] == (unsigned char)c)
		return (str);
	return (NULL);
}
