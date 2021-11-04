/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:23:46 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 12:27:36 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

/* 
* L15 -> Takes as a parameter an element and frees the memory of the 
* element's content using the function DEL given as a parameter 
* and free the element.
* The memory NEXT must not be freed.
*/
