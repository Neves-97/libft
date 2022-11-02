/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:09:32 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/02 17:09:48 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

t_list *ft_lstnew(void *content)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

void    ft_lstadd_front(t_list **lst, t_list *new)
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
