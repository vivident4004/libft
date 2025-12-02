/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:04:13 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/26 15:12:54 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	size_t		l1;
	size_t		l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char *)ft_calloc(l1 + l2 + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, s1, l1);
	ft_memmove(res + l1, s2, l2 + 1);
	return (res);
}
