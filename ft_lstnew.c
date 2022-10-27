/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:10:23 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/27 18:49:32 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
