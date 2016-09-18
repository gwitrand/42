/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:36:47 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/15 21:36:48 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_TAIL_H
# define __FT_TAIL_H

# define BUF_SIZE		30719

void	ft_tail_2(char *content, int n_option);
void	ft_tail(char *content, int n_option);
void	ft_errno(char *argv);
int		ft_nb(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_readwrite(int ret, int fd, int n_option, char *buf);

#endif
