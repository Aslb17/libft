/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:52:18 by ade-cham          #+#    #+#             */
/*   Updated: 2020/06/02 13:03:53 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	char			tofind;

	i = 0;
	str = (char*)s;
	tofind = (char)c;
	while (str[i] != tofind)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char*)str + i);
}
