/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surkumar <surkumar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:09:19 by surkumar          #+#    #+#             */
/*   Updated: 2022/10/27 20:23:40 by surkumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*suri;

	suri = ft_lstlast(*lst);
	if (!suri)
		*lst = new;
	else
		suri->next = new;
}
