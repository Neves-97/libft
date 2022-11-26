/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:34 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/24 12:11:31 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The length of the list
// Counts the number of nodes in a list.

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main()
// {
// 	t_list *one = ft_lstnew("Neves");
// 	one->next = ft_lstnew("macho");
// 	one->next->next = ft_lstnew("rodrigo");
// 	printf("Existem: %i, listas", ft_lstsize(one));
// }