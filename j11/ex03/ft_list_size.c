/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 13:39:57 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/13 13:39:59 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	if (begin_list)
	{
		while (begin_list->next)
		{
			count++;
			begin_list = begin_list->next;
		}
		count++;
	}
	return (count);
}
