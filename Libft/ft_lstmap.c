/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:16:23 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 14:24:52 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
	{
		return (NULL);
	}
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}

/*
* L15 -> Iterates the list LST and applies the function F 
* to the content of each element. 
* Creates a new list resulting of the successive 
* applications of the function F. 
* The DEL function is used to delete the content of an element if needed.
* L27 -> Allocates (with malloc(3)) and returns a new element.
* The variable ’content’ is initialized with the value of the
* parameter ’content’.
* The variable ’next’ is initialized to NULL.
* L30 -> Deletes and frees the given element and every successor 
* of that element, using the function ’del’ and free(3).
* Finally, the pointer to the list must be set to NULL.
* L33 -> Adds the element ’new’ at the end of the list.
*/
