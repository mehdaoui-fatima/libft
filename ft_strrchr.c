/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:54:12 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/06 14:48:49 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			toreturn;
	const char	*res;

	i = 0;
	toreturn = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			toreturn = i;
		i++;
	}
	if ((char)c == '\0')
	{
		res = &s[i];
		return ((char*)res);
	}
	if (toreturn >= 0)
	{
		res = &s[toreturn];
		return ((char*)res);
	}
	return (NULL);
}
