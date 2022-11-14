/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:04 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/08 14:32:20 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The C library function void *memcpy(void *dest, const void *src, size_t n) 
// copies n characters from memory area src to memory area dest.

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*s1;

// 	s1 = (char *)dest;
// 	i = 0;
// 	while (i < n)
// 	{
// 		*(char *)s1 = *(char *)src;
// 		s1++;
// 		src++;
// 		i++;
// 	}
// 	return (dest);
// }

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int		i;
	unsigned char		*dst;
	unsigned const char	*str;

	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	dst = (unsigned char *)str1;
	str = (unsigned char *)str2;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)str + i);
		i++;
	}
	return (dst);
}