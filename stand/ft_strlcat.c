/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:42:01 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/07 20:53:08 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcpy() and strlcat() functions copy and concatenate strings 
//respectively. 
// They are designed to be safer, more consistent, and less error 
//prone replacements
// for strncpy(3) and strncat(3). Unlike those functions, strlcpy() 
//and strlcat()
// take the full size of the buffer (not just the length)
// and guarantee to NUL-terminate the result 
// (as long as size is larger than 0 or, in the case of strlcat(),
// as long as there is at least one byte free in dst).
// Note that a byte for the NUL should be included in size.
// Also note that strlcpy() and strlcat() only operate on
//true ''C'' strings.
// This means that for strlcpy() src must be NUL-terminated
// and for strlcat()
// both src and dst must be NUL-terminated.
// The strlcat() function appends the NUL-terminated string 
//src to the end of dst. 
// It will append at most size - strlen(dst) - 1 bytes, 
//NUL-terminating the result.  

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + strlen(src));
}

// int main()
// {
//     char t[] = "Rodrigo";
//     char y[] = "Nevpsyu";

//     printf("%ld", ft_strlcat(t, y, 10));
// }