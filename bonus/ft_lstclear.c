/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:21 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/03 16:23:41 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stand/libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if (!*lst)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    lst = NULL;
    
    

    
    
}