/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:41:10 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/29 16:48:13 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	ll;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	ll = ft_strlen(little);
	i = 0;
	while (big[i] && i < len - ll + 1)
	{
		if (ft_strncmp(big + i, little, ll) == 0 && len != 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
