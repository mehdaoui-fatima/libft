/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:12:43 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/08 17:08:37 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	i = 0;
	srcc = (char*)src;
	dstt = (char*)dst;
	if (!src && !dst)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			dstt[i] = srcc[i];
			i++;
		}
	}
	else
	{
		while (len--)
			dstt[len] = srcc[len];
	}
	return (dst);
}
