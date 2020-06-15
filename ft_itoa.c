/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 16:20:45 by ade-cham          #+#    #+#             */
/*   Updated: 2020/06/04 17:04:43 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_nbr_size(long nbr)
{
	size_t	size;

	size = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	if (nbr == 0)
		size++;
	while (nbr != 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*nbr;
	size_t	i;
	long	num;
	size_t	n_len;

	num = n;
	n_len = ft_nbr_size(n);
	nbr = NULL;
	if (!(nbr = (char *)malloc(sizeof(*nbr) * (n_len + 1))))
		return (NULL);
	i = 0;
	nbr[n_len + 1] = '\0';
	nbr[n_len] = '\0';
	if (num < 0)
	{
		nbr[0] = '-';
		i++;
		num *= -1;
	}
	while (n_len-- > i)
	{
		nbr[n_len] = (num % 10) + 48;
		num = num / 10;
	}
	return (nbr);
}
