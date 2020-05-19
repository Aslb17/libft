/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 13:56:28 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/19 15:58:00 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int words;
	int i;

	words = 0;
	i = 0;
	if (c < 0)
		return (0);
    while (s[i] != '\0')
    {
        if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0')
	    	words++;
		i++;
	}
	return (words);
}

static int	word_len(const char *s, char c, int start)
{
	int i;

	i = 0;
	while (s[start + i] != c && s[start + i] != '\0')
		i++;
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		start;
	
    if (!s)
		return (NULL);
	if (!(ptr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
    {
		free(ptr);
        return (NULL);
    }
	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			ptr[start] = ft_substr(s, i, word_len(s, c, i));
			i = i + word_len(s, c, i);
			start++;
		}
		i++;
	}
	ptr[start] = NULL;
	return (ptr);
}
