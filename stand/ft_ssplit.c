/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:35:56 by roda-min          #+#    #+#             */
/*   Updated: 2022/11/18 18:02:32 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    count_words(char const *str, char c)
{
    int i;
    int trigger;

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
        {
            trigger = 0;
        }
        str++;
    }
    return (i);
    
}

char	*word_dup(const char *str, int start, int finish)
{
    char *word;
    int i;

    i = 0;

    word = malloc((finish - start + 1) * sizeof(char));
    if (!(word))
        NULL;
    while (start - finish)
        word[i++] = str[start++];
    word = '/0';
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
	split[j] = NULL;
	return (split);
}