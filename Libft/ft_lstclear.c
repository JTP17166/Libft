/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:27:59 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 15:01:45 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp;

	if (!lst || !*lst)
	{
		return ;
	}
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
* L15 -> Deletes and frees the given element and every 
* successor of that element, using the function DEL and free.
* Finally, the pointer to the list must be set to NULL.
* L26 -> Takes as a parameter an element and frees the memory
* of the element’s content using the function ’del’ given 
* as a parameter and free the element.
* The memory of ’next’ must not be freed.
*/
