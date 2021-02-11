/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:16:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/07 12:25:21 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned long	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr)
	{
		while (i < count * size)
			((char*)ptr)[i++] = 0;
	}
	return ((void*)ptr);
}
