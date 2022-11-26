/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:30 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/24 17:14:44 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.
// del: The address of the function used to delete
// the content of a node if needed.

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
// static	void	append(int *num)
// {
// 	*num = *num + *num;
// }
// static void		del_it(int *nb)
// {
// 	*nb = *nb - *nb;
// }
// int	main()
// {
// 	int	ya = 6;
// 	int yo = 7;
// 	int ye = 8;
// 	int yu = 9;
// 	t_list *first = ft_lstmap(&ya, append, del_it);
// 	t_list *second = ft_lstmap(&yo, append, del_it);
// 	t_list *third = ft_lstmap(&ye, append, del_it);
// 	t_list *four = ft_lstmap(&yu, append, del_it);
// 	first ->next = second;
// 	second ->next = third;
// 	third ->next = four;

// 	ft_lstmap(first, (void (*)(void *))&append, &del_it);
// 	printf("%i\n", *((int *)(first->content)));
// 	printf("%i\n", *((int *)(second->content)));
// 	printf("%i\n", *((int *)(third->content)));
// 	printf("%i\n", *((int *)(four->content)));

// 	return (0);
// }