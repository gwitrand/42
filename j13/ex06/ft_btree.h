/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:18:56 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/16 16:18:57 by gwitrand         ###   ########.fr       */
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

int							btree_level_count(t_btree *root);
t_btree						*btree_create_node(void *item);

#endif
