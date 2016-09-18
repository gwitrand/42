/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:31:29 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/05 15:31:32 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i])
	{
		while (to_find[pos] == str[i + pos])
		{
			if (pos == len - 1)
				return (str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
