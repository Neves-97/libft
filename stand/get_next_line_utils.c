/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:15:43 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/26 18:14:41 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The C library function char *strchr(const char *str, int c) 
// searches for the first occurrence of the character c (an unsigned char)
// in the string pointed to by the argument str.

// str − This is the C string to be scanned.
// c − This is the character to be searched in str.

// This returns a pointer to the first occurrence of the character c 
// in the string str, or NULL if the character is not found.
#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
	{
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

// The strdup() and strndup() functions are used to duplicate a string. 
// strdup() : 
// Syntax : char *strdup(const char *s); 
// This function returns a pointer to a null-terminated byte string, 
// which is a duplicate of the string pointed to by s. 
// The memory obtained is done dynamically using 
// malloc and hence it can be freed using free(). 
// It returns a pointer to the duplicated string s.
// Below is the C implementation to show the use of strdup() function in C:

char	*ft_strdup( const char *s)
{
	int		i;
	int		j;
	char	*new;

	j = 0;
	while (s[j])
	j++;
	new = malloc(sizeof(char) * (j + 1));
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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// The string from which to create the substring.
// start: The start index of the substring in the
// string ’s’.
// len: The maximum length of the substring.

// The substring.
// NULL if the allocation fails.

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = malloc(sizeof(char));
		if (!sub)
			return (0);
		*sub = '\0';
		return (sub);
	}
	if (s_len < len)
		return (ft_strdup((char *)s + start));
	i = 0;
	sub = (char *)malloc(len + 1 * sizeof(char));
	if (!sub)
		return (0);
	while (start < s_len && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
