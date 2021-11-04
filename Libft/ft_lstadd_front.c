/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:50:55 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 11:58:20 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	if (*lst != NULL)
	{
		new->next = *lst;
	}
	*lst = new;
}

/* 	L15 -> Adds the element NEW at the beginning of the list.
*/
