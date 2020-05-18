/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:38:45 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/18 13:12:42 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char *s3;
    size_t  len;

    i = 0;
    if  (!s1 || !set)
        return (NULL);
    if (!(s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;
    len = ft_strlen(s1);
    while (len > 0 && ft_strchr(set, s1[len]) 
            len--;
    s3 = ft_substr(s1, i, len + 1);
    return (s3);
}
