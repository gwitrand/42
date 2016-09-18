/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 14:52:48 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/13 14:52:49 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*tmp;

	i = 2;
	if (ac == 1)
		return (0);
	list = ft_create_elem(av[1]);
	while (++i < ac)
	{
		tmp = list;
		list = ft_create_elem(av[i]);
		list->next = tmp;
	}
	return (list);
}
