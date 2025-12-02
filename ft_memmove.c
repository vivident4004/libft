/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:12:01 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/25 16:04:51 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdint.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	temp = (char *)dest;
	s = (const char *)src;
	if (temp <= s)
	{
		while (n--)
			*temp++ = *s++;
	}
	else
	{
		while (n--)
			temp[n] = s[n];
	}
	return (dest);
}
