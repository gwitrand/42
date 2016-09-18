/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 21:38:47 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/05 21:38:48 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	cur1;
	int	cur2;

	cur2 = 0;
	cur1 = 0;
	while (dest[cur1] != '\0')
	{
		cur1++;
	}
	while (src[cur2] != '\0')
	{
		dest[cur1] = src[cur2];
		cur1++;
		cur2++;
	}
	dest[cur1] = '\0';
	return (dest);
}
