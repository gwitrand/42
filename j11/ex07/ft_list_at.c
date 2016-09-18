/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:12:57 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/13 16:12:58 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list 		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	i;

	i = 1;
	list = begin_list;
	while (i < nbr)
	{
		if (!list)
			return (NULL);
		list = list->next;
		i++;
	}
	list->next = NULL;
	return (list);
}
