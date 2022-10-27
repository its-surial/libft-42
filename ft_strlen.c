/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:16:46 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/25 22:16:48 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	ret;

	ret = 0;
	while (*s++)
		++ret;
	return (ret);
}
