/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:12:45 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/25 22:20:39 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ret;

	ret = b;
	while (len--)
		*(char *)b++ = (unsigned char)c;
	return (ret);
}
