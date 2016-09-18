/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 21:42:46 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/13 21:42:47 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*list_ptr;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		if (list_ptr && (*cmp)(list_ptr->data, data_ref) == 0)
		{
			tmp = *begin_list;
			*begin_list = list_ptr->next;
			free(tmp);
		}
		if (list_ptr->next)
		{
			if ((*cmp)((list_ptr->next)->data, data_ref) == 0)
				list_ptr->next = (list_ptr->next)->next;
		}
		list_ptr = list_ptr->next;
	}
}
