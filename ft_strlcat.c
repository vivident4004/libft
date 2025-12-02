/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:39:39 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/25 16:39:48 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sl;
	size_t	dl;
	size_t	n;

	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	if (dl >= size)
		return (sl + size);
	while (*dest)
		dest++;
	n = dl;
	while (*src && n < size - 1)
	{
		*dest++ = *src++;
		n++;
	}
	*dest = '\0';
	return (sl + dl);
}
