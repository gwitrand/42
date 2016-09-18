/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:58:49 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 11:58:51 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int s1_end;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	s1_end = i;
	while (src[i - s1_end] && i < size - 1)
	{
		dest[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dest[i] = '\0';
	return (s1_end + j);
}
