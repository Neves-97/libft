/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:09:32 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/24 17:16:08 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int	main()
// {	
// 	t_list *one = ft_lstnew("yaus");
// 	one->next = ft_lstnew("nickle");
// 	one->next->next = ft_lstnew("tom");

// 	t_list *yo = ft_lstlast(one);
// 	char	*gay = yo->content;
// 	printf("Existem: %i, listas\n", ft_lstsize(one));
// 	printf("Existem: %s, listas", gay);
// }