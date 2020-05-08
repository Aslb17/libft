/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:04:35 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/08 14:41:52 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dest;
    unsigned char *ptr_src;

    ptr_dest = (unsigned char *) dest;
    ptr_src = (unsigned char *) src;
    while (n > 0)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }
    return (dest);
}
