/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:42:14 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:43:01 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int pos;
	unsigned int i;

	if (!*to_find)
    {
		return ((char*)str);
    }
	pos = 0;
	while (str[pos] && (size_t)pos < len)
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] && str[pos + i] == to_find[i] &&
					(size_t)(pos + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char*)&str[pos]);
		}
		++pos;
	}
	return (0);
}

int main()
{
    char d[] = "Ganda mocaboy";
    char e[] = "boy";

    printf("MINE\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%s\n", ft_strnstr(d, e, 20));
    printf("\n");
    printf("\n");
    printf("\n");
    printf("ORIGINAL\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%s\n", strstr(d, e));


}