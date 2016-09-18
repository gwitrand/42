/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 04:44:29 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 04:44:30 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PERSO_H
# define __FT_PERSO_H
# define SAVE_AUSTIN_POWERS "femme-bot"
# include <string.h>

typedef	struct		s_perso
{
	char	*name;
	int		life;
	int		age;
	char	*profession;
}					t_perso;

#endif
