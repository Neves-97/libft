/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:16 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/24 17:25:00 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst: The address of a pointer to the first link of
// a list.
// new: The address of a pointer to the node to be
// added to the list.

// Adds the node ’new’ at the end of the list

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!(new))
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

// int	main()
// {	
// 	t_list *one = ft_lstnew("yaus");
// 	one->next = ft_lstnew("nickle");
// 	one->next->next = ft_lstnew("tom");

// 	t_list *yo = ft_lstadd_back(one);
// 	char	*gay = yo->content;
// 	printf("Existem: %i, listas\n", ft_lstsize(one));
// 	printf("Existem: %s, listas", gay);
// }
