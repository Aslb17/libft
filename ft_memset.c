/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 16:18:03 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/08 14:45:06 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memset(void *dest, int c, size_t n)
{
    unsigned char *ptr;
  
    ptr = (unsigned char *) dest;
    while (n > 0)
    {
        *ptr = (unsigned char) c;
        ptr++;
        n--;
    }
    return (dest);
}
