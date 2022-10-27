/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:17:28 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/25 22:17:36 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}
