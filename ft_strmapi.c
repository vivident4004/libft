/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aflorea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:37:18 by aflorea           #+#    #+#             */
/*   Updated: 2025/11/27 17:44:04 by aflorea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;
	int				len;

	len = ft_strlen(s);
	t = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	return (t);
}
