/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:26 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/24 17:15:01 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst: The address of a pointer to a node.
// f: The address of the function used to iterate on
// the list.

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void	double_it(int *num)
// {
// 	*num *= 2;
// }

// int	main()
// {
// 	int	x = 4;
// 	int	y = 5;
// 	int	z = 6;

// 	t_list *first = ft_lstnew(&x);
// 	t_list *second = ft_lstnew(&y);
// 	t_list *third = ft_lstnew(&z);
// 	first->next = second;
// 	second->next = third;

// 	ft_lstiter(first, (void (*)(void *))&double_it);
// 	printf("%i\n", *((int *)(first->content)));
// 	printf("%i\n", *((int *)(second->content)));
// 	printf("%i\n", *((int *)(third->content)));

// 	return 0;
// }