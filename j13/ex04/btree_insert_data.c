/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 22:30:01 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/16 16:26:35 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree			*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = (t_btree*)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->left = 0;
		btree->right = 0;
		btree->item = item;
	}
	return (btree);
}

void			btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree		*new_node;

	new_node = btree_create_node(item);
	if (*root == NULL)
		*root = new_node;
	else
	{
		if ((*cmpf)(item, (*root)->item) < 0)
			btree_insert_data(&((*root)->left), item, cmpf);
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
}
