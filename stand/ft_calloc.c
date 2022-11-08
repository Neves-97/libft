/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:07 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/08 16:17:39 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The C library function void *calloc(size_t nitems, size_t size) 
//allocates the 
//requested memory and returns a pointer to it. 
//The difference in malloc and calloc is that malloc 
//does not set the memory to zero
//where as calloc sets allocated memory to zero.

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pointer;

	pointer = malloc(nitems * size);
	if (pointer == NULL)
		return (pointer);
	ft_bzero(pointer, size * nitems);
	return (pointer);
}
