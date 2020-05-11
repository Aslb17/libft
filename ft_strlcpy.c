/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 13:22:17 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/11 14:14:06 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t          ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

    i = 0;
	if ( dest == NULL || src == NULL)
		return (0);
	while (src[i] != '\0')
        i++;
	if (size == 0)
		return (i);
	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
    while (src[i] != '\0')
		i++;
	return (i);
}
