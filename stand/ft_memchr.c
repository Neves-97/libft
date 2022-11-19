/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:40:58 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/18 20:28:23 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A void pointer is a pointer that has no associated data type with it. 
A void pointer can hold address of any type andd can be typecasted to 
any type.*/

/*Advantages of void pointers || malloc() and calloc() return void *
type and this allows these functions to be used to allocate memory of
any data type (just because of void *)*/

/*void pointers cannot be deferenced*/

/*int main()
{
    int a = 10;
    void *ptr = &a;
    printf("%d", *ptr);
   
    return 0;
}
Compiler Error: 'void*' is not a pointer-to-object type */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *) str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
