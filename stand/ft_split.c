/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:41:27 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/14 20:08:40 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !(split))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
// static int	numstring(char const *s1, char c)
// {
// 	int	comp;
// 	int	cles;

// 	comp = 0;
// 	cles = 0;
// 	if (*s1 == '\0')
// 		return (0);
// 	while (*s1 != '\0')
// 	{
// 		if (*s1 == c)
// 			cles = 0;
// 		else if (cles == 0)
// 		{
// 			cles = 1;
// 			comp++;
// 		}
// 		s1++;
// 	}
// 	return (comp);
// }

// static int	numchar(char const *s2, char c, int i)
// {
// 	int	lenght;

// 	lenght = 0;
// 	while (s2[i] != c && s2[i] != '\0')
// 	{
// 		lenght++;
// 		i++;
// 	}
// 	return (lenght);
// }

// char	**freee(char **dst, int j)
// {
// 	while (j > 0)
// 	{
// 		j--;
// 		free((void *)dst[j]);
// 	}
// 	free(dst);
// 	return (NULL);
// }

// static char	**affect(char const *s, char **dst, char c, int l)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	j = 0;
// 	while (s[i] != '\0' && j < l)
// 	{
// 		k = 0;
// 		while (s[i] == c)
// 			i++;
// 		dst[j] = (char *)malloc(sizeof(char) * numchar(s, c, i) + 1);
// 		if (dst[j] == NULL)
// 			return (freee(dst, j));
// 		while (s[i] != '\0' && s[i] != c)
// 			dst[j][k++] = s[i++];
// 		dst[j][k] = '\0';
// 		j++;
// 	}
// 	dst[j] = 0;
// 	return (dst);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**dst;
// 	int		l;

// 	if (s == NULL)
// 		return (NULL);
// 	l = numstring(s, c);
// 	dst = (char **)malloc(sizeof(char *) * (l + 1));
// 	if (dst == NULL)
// 		return (NULL);
// 	return (affect(s, dst, c, l));
// }