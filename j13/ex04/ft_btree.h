/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 22:18:50 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/15 22:18:51 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BTREE_H
# define __FT_BTREE_H
# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*right;
	struct s_btree	*left;
	void			*item;
}					t_btree;

#endif
