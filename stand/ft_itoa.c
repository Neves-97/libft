/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:40:55 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/22 08:38:00 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int	nb;

	nb = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		nb++;
	}
	while (n > 0)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb = lenght(n);
	res = (char *)malloc(nb + 1 * sizeof(char));
	if (!res)
		return (0);
	res[nb] = '\0';
	nb--;
	if (n == 0)
		res[0] = '0';
	else if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		res[nb] = (n % 10) + '0';
		n /= 10;
		nb--;
	}
	return (res);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(123156));
// 	return (0);
// }
