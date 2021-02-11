/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:31:18 by fmehdaou          #+#    #+#             */
/*   Updated: 2019/11/07 19:31:20 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		size;

	size = 0;
	head = lst;
	if (!lst)
		return (0);
	while (head)
	{
		size++;
		head = head->next;
	}
	return (size);
}
