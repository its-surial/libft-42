/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:17:18 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/27 20:45:03 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_tmp;
	char	*needle_tmp;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack) || len < ft_strlen(needle))
		return (0);
	i = len - ft_strlen(needle) + 1;
	while (i-- && *haystack)
	{
		haystack_tmp = (char *)haystack;
		needle_tmp = (char *)needle;
		while (*needle_tmp && *needle_tmp == *haystack_tmp)
		{
			++haystack_tmp;
			++needle_tmp;
		}
		if (!*needle_tmp)
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}
