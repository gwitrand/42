/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:18:46 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/16 16:18:48 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

int		btree_level_count(t_btree *root)
{
	int countleft;
	int countright;

	countleft = 1;
	countright = 1;
	if (root->left)
		countleft += btree_level_count(root->left);
	if (root->right)
		countright += btree_level_count(root->right);
	if (countright > countleft)
		return (countright);
	else if (countright < countleft)
		return (countleft);
	else
		return (countleft);
}
