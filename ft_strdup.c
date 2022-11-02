/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:38 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/02 10:26:05 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strdup() and strndup() functions are used to duplicate a string. 
// strdup() : 
// Syntax : char *strdup(const char *s); 
// This function returns a pointer to a null-terminated byte string, 
// which is a duplicate of the string pointed to by s. 
// The memory obtained is done dynamically using 
// malloc and hence it can be freed using free(). 
// It returns a pointer to the duplicated string s.
// Below is the C implementation to show the use of strdup() function in C:
 

char *ft_strdup(const char *s)
{
    char	*new;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// char	*ft_strdup(const char *s)
// {
// 	char	*new;
// 	size_t	len;

// 	len = ft_strlen(s) + 1;
// 	new = (char *)malloc(sizeof(*new) * len);
// 	if (!new)
// 		return (NULL);
// 	return ((char *)ft_memcpy(new, s, len));
// }
