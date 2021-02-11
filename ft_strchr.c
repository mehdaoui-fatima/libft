/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:36:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/06 14:37:46 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	l;

	i = 0;
	j = 0;
	l = (char)c;
	while (s[i])
		i++;
	while (j <= i)
	{
		if (*s != l)
			s++;
		else
			return ((char*)s);
		j++;
	}
	return (NULL);
}
