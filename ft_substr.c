/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:05:32 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/29 18:05:22 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	size_t			i;
	unsigned int	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start > l || len == 0)
		return (ft_calloc(1, 1));
	i = start;
	while (s[i] && i < len + start)
		i++;
	i -= start;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[start], i + 1);
	return (res);
}

/*
int main(void)
{
	char str[] = "Ciao mondo!";
	char *res = ft_substr(str, 10, 4);
	printf("res:%s", res);
	return (0);
}*/
