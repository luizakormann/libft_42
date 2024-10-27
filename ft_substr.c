/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:46:29 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/27 17:58:25 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*str;
	char	*res;
	size_t	i;
	size_t	j;

	str = (char *)s;
	res = (char *)malloc(len + 1);
	i = start - 1;
	j = 0;
	while (j <= len)
	{
		res[j] = str[i];
		i++;
		j++;
	}
	if (res == NULL)
		return (NULL);
	else
		return (res);
}
