/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:03:24 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/08 17:06:23 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	if (!haystack && len == 0)
		return (NULL);
	nlen = ft_strlen(needle);
	while (haystack[i])
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
				j++;
			if (j == nlen)
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
