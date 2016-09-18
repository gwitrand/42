/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 12:16:48 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/05 12:16:49 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int place;

	place = 0;
	while (src[place] != '\0')
	{
		dest[place] = src[place];
		place++;
	}
	dest[place] = '\0';
	return (dest);
}
