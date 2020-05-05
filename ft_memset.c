/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 16:18:03 by ade-cham          #+#    #+#             */
/*   Updated: 2020/05/05 17:03:53 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *dest, int c, size_t n)
{
    int i;
    unsigned char *ptr;
  
    ptr = (unsigned char *) dest;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }
    return (s);
}
