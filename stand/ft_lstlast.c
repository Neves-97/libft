/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:05 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/24 17:25:04 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: The beginning of the list.
// Return value Last node of the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int	main()
// {	
// 	t_list *one = ft_lstnew("yaus");
// 	one->next = ft_lstnew("nickle");
// 	one->next->next = ft_lstnew("tom");

// 	t_list *yo = ft_lstlast(one);
// 	char	*ya = yo->content;
// 	printf("Existem: %i, listas\n", ft_lstsize(one));
// 	printf("Existem: %s, listas", ya);
// }
