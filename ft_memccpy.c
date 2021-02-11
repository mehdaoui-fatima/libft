/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:07:29 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/06 19:55:26 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*dstt;
	unsigned char	*srcc;
	unsigned char	cc;

	i = 0;
	dstt = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (srcc[i] == cc)
		{
			dstt[i] = cc;
			return ((void*)&dstt[i + 1]);
		}
		dstt[i] = srcc[i];
		i++;
	}
	return (NULL);
}
