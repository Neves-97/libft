/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:26 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/05 04:25:09 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stand/libft.h"

// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != '/0')
	{
		f(lst->content);
		lst = lst->next;
	}
}
