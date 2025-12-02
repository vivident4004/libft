/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:13:33 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/26 15:18:02 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check_set(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (42);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	start = 0;
	end = ft_strlen(s1);
	if (end != 0)
		end -= 1;
	while (check_set(s1[end], set) && end > start)
		end--;
	while (check_set(s1[start], set) && start < end)
		start++;
	if (start == end && (!s1[start] || check_set(s1[end], set)))
		return (ft_calloc(1, 1));
	len = end - start + 1;
	res = (char *)ft_calloc(sizeof(char), (len + 1));
	i = 0;
	while (i < len)
	{
		res[i] = s1[start + i];
		i++;
	}
	return (res);
}
