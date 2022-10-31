/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:32 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:42:53 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
    while (*str != (char)c && *str)
    {
        str++;
    }
    if (*str == (char)c)
    {
        return ((char *)str);
    }
    return (NULL);
    
}

int main()
{
    char d[] = "Ro.dri.go.Neves";

    char e = '.';

    printf("%s\n", ft_strchr(d, e));
}