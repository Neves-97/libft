/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:38 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/22 08:41:35 by roda-min         ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (s[size])
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (!(new))
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

// int	main()
// {
// 	char source[] = "GeeksForGeeks";
// 	char* target = ft_strdup(source);
// 	printf("%s", target);
// 	return 0;
// }
