/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:12:52 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/07 12:13:13 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstt;
	unsigned char	*srcc;

	dstt = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return ((void*)dst);
}
