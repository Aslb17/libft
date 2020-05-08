/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:13:00 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/08 14:26:48 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_bzero(void *dest, size_t n)
{ 
    unsigned char *ptr;

    ptr = (unsigned char *) dest;
    while (n > 0)
    {
       *ptr = 0;
        n--;
    }
    return (dest);
}
