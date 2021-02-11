/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:23:15 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/07 12:45:52 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;
	unsigned int	j;
	size_t			len_s;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s[start] != '\0' && j < len && start < len_s)
		ptr[j++] = s[start++];
	ptr[j] = '\0';
	return (ptr);
}
