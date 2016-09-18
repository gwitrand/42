/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:18:36 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/16 16:18:38 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item
	(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (root)
	{
		btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		btree_search_item(root->right, data_ref, cmpf);
	}
	return (NULL);
}
