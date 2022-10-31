/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:03 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:42:36 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.


void		ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	if (n == 0)
	{
		return ;
	}
	
	str = (char *)s;
	
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}