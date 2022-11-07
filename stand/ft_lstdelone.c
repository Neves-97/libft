/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:23 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/07 17:50:59 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: The node to free.
// del: The address of the function used to delete
// the content.

// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.

// The del statement can be used to delete an item at a given index.
// It can also be used to remove slices from a list.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!(lst))
		return ;
	del(lst->content);
	free(lst);
}
