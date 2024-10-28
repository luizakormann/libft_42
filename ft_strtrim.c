/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:03:18 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/28 20:42:33 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*res;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	setlen;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	ptr = (char *)malloc(end + 1);
	res = ptr;
	setlen = ft_strlen(set);
	if (ptr == NULL)
		return (NULL);
	while (s1[start] && !ft_memcmp(&s1[start], set, setlen))
		start += setlen;
	while (end > start && !ft_memcmp(&s1[end - setlen], set, setlen))
		end -=setlen;
	while (start < end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (res);
}
