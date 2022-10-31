/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:06 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:42:48 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// The C library function void *memmove(void *str1, const void *str2, size_t n) 
// copies n characters from str2 to str1, but for overlapping memory blocks,
//  memmove() is a safer approach than memcpy().

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d1;
	char *s1;

	d1 = (char *)dest;
	s1 = (char *)src;
	if (dest == src)
    {
		return (dest);
    }
	if (s1 < d1)
	{
		while (n--)
        {
			*(d1 + n) = *(s1 + n);
        }
		return (n);
	}
	while (n--)
    {
		*d1++ = *s1++;
    }
	return (n);
}