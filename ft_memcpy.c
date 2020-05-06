/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:04:35 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/06 15:18:20 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *ptr_dest;
    unsigned char *ptr_src;

    i = 0;
    ptr_dest = (unsigned char *) dest;
    ptr_src = (unsigned char *) src;
    while (i > n)
    {
        ptr_dest[i] = ptr_src[i];
        i++;
    }
    return (dest);
}
