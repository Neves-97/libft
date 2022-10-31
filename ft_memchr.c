/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:40:58 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:42:42 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t			i;
	unsigned char	*s;
	unsigned char	character;

	s = (unsigned char *)str;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}