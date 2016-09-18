/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 19:53:01 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/13 19:53:02 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_foreach_if(t_list *list
								, void (*function)(void *)
								, void *data_ref
								, int (*compare)())
{
	while (list)
	{
		if (compare(list->data, data_ref))
			function(list->data);
		list = list->next;
	}
}
