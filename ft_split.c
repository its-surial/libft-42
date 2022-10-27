/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:14:49 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/27 16:14:42 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_ticketlen(const char *s, char c)
{
	size_t	result;

	result = 0;
	while (*s)
	{
		if (*s != c)
		{
			++result;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	result = malloc(sizeof(char *) * (ft_ticketlen(s, c) + 1));
	if (!result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			result[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	result[i] = 0;
	return (result);
}
