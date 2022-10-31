/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:32:15 by roda-min          #+#    #+#             */
/*   Updated: 2022/10/31 11:42:35 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int result;
    int signal;

    i = 0;
    result = 0;
    signal = 1;

    while (str[i] <= 32)
    {
        str++;
    }
    if (str[i] == '-')
    {
        signal = -1;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        str++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10;
        result = result + (str[i] - '0');
        str++;
    }
    return (result * signal);   
}

int main()
{
    char c[] = "          98";
    char d[] = "asdasdas98";
    char e[] = "     @@@98";
    char f[] = "-98";
    char g[] = "          --98";
    char h[] = "--98";

    printf("%d\n", ft_atoi(c));
    printf("%d\n", ft_atoi(d));
    printf("%d\n", ft_atoi(e));
    printf("%d\n", ft_atoi(f));
    printf("%d\n", ft_atoi(g));
    printf("%d\n", ft_atoi(h));

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("real func now");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("%d\n", atoi(c));
    printf("%d\n", atoi(d));
    printf("%d\n", atoi(e));
    printf("%d\n", atoi(f));
    printf("%d\n", atoi(g));
    printf("%d\n", atoi(h));   
}