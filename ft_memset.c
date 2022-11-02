/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:09 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/02 11:39:02 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The C library function void *memset(void *str, int c, size_t n) 
// copies the character c (an unsigned char) 
// to the first n characters of the string pointed to, by the argument str.

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *) str;
	while (i < n)
	{
		i++;
		pointer = (unsigned char) c;
	}
	return (str);
}
