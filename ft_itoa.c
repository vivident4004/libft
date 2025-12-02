/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 16:18:04 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/29 20:51:14 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*reverse(char *s, int len)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return (s);
}

size_t	ft_numlen(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	long	ln;
	char	*res;
	size_t	size;

	if (n == 0)
	{
		res = ft_calloc(1, 2);
		res[0] = '0';
		return (res);
	}
	ln = (long)n;
	size = ft_numlen(ln);
	i = 0;
	if (ln < 0)
		ln = -ln;
	res = (char *)ft_calloc(sizeof(char), size);
	while (ln > 0)
	{
		res[i++] = (ln % 10) + 48;
		ln /= 10;
	}
	if (n < 0)
		res[i++] = '-';
	return (reverse(res, i));
}
