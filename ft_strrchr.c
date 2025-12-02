/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:08:05 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/29 16:08:22 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	size_t		len;

	len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + len);
	p = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			p = s;
		s++;
	}
	return ((char *)p);
}
