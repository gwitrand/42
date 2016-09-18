/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:51:21 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 16:51:22 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_POINT_H
# define __FT_POINT_H

typedef	struct	s_point
{
	int		x;
	int		y;
}				t_point;

void			set_point(t_point *point);

#endif
