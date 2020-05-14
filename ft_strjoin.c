/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 10:49:12 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/14 16:37:31 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
//#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;
	char			*s3;

  len = strlen(s1) + strlen(s2);
	i = 0;
	j = 0;
	if (!(s3 = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
    if (s3 == NULL)
        return (NULL);
	while (s1[j] != '\0')
        s3[i++] = s1[j++];
    j = 0;
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
