/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:07:44 by lukorman          #+#    #+#             */
/*   Updated: 2024/10/30 22:32:18 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numlen(long num);
int		times(size_t nlen, long num);
char	*writenums(long num, int sep, char *res, size_t i);

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	size_t	nlen;
	int		sep;
	long	num;

	num = n;
	nlen = numlen(num);
	res = (char *)malloc(nlen * sizeof(char));
	i = 0;
	sep = times(nlen, num);
	if (!res)
		return (NULL);
	if (num == 0)
	{
		res[i++] = '0';
		res[i++] = '\0';
	}
	else
		writenums(num, sep, res, i);
	return (res);
}

size_t	numlen(long num)
{
	size_t	nlen;

	nlen = 1;
	if (num < 0)
	{
		nlen++;
		num = -num;
	}
	while (num > 9)
	{
		nlen++;
		num /= 10;
	}
	return (++nlen);
}

int	times(size_t nlen, long num)
{
	int	mult;

	mult = 1;
	nlen -= 1;
	if (num < 0)
		nlen--;
	while (nlen > 1)
	{
		mult *= 10;
		nlen--;
	}
	return (mult);
}

char	*writenums(long num, int sep, char *res, size_t i)
{
	char	neg;
	long	number;

	neg = '-';
	number = num;
	if (num < 0)
	{
		res[i++] = neg;
		num = -num;
		number = -number;
	}
	while (num > 0)
	{
		res[i++] = (num / sep) + '0';
		num = num - ((num / sep) * sep);
		sep /= 10;
	}
	while (number != 0 && number % 10 == 0)
	{
		res[i++] = '0';
		number /= 10;
	}
	res[i++] = '\0';
	return (res);
}
