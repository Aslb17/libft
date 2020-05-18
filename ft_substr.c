/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 16:59:53 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/18 11:10:55 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

    i = 0;
    if (! s)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(" ");
    while (s[i] != '\0')
        i++;
	if ( start > i || start + len > i)
        return NULL;
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
		return NULL;
	i = 0;
	while (len > 0)
	{
		ptr[i] = s[start + i];
		i++;
		len--;
	}
	return (ptr);
}
