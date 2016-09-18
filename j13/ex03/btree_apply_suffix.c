/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 22:27:16 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/15 22:27:19 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void			btree_apply_suffix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root != NULL && (*applyf) != NULL)
	{
		btree_apply_suffix(root->left, (*applyf));
		btree_apply_suffix(root->right, (*applyf));
		(*applyf)(root);
	}
}
