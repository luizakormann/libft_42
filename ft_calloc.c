/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:26:35 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/23 21:59:17 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "ft_libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t_size;

	t_size = nmemb * size;
	ptr = malloc(t_size);
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, t_size);
	return (ptr);
}
