/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:18:19 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/16 16:18:31 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BTREE_H
# define __FT_BTREE_H

typedef struct				s_btree
{
	struct s_btree			*right;
	struct s_btree			*left;
	void					*item;
}							t_btree;

void						*btree_search_item
	(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
t_btree						*btree_create_node(void *item);

#endif
