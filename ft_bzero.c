/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:13:00 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/05 17:15:17 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_bzero(void *dest, size_t n)
{
    int i;
    unsigned char *ptr;

    ptr = (unsigned char *) dest;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
    return (dest);
}
