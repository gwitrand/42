/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 20:37:49 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/05 20:37:50 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	place;

	place = 0;
	while (str[place] != '\0')
	{
		if (str[place] >= 'A' && str[place] <= 'Z')
			str[place] = str[place] - 'A' + 'a';
		place++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	place;

	place = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	while (str[place] != '\0')
	{
		if ((str[place] >= ' ' && str[place] <= '/') ||
			(str[place] >= ':' && str[place] <= '@'))
			if (str[place + 1] >= 'a' && str[place + 1] <= 'z')
				str[place + 1] = str[place + 1] - 'a' + 'A';
		place++;
	}
	return (str);
}
