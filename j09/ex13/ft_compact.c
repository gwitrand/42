/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 13:34:32 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 13:34:34 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char *t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;
}

void	del(char **tab, int pos, int *len)
{
	while (pos < *len - 1)
	{
		ft_swap(&(tab[pos]), &(tab[pos + 1]));
		pos++;
	}
	*len = *len - 1;
}

int		ft_compact(char **tab, int len)
{
	int i;

	i = -1;
	while (++i < len)
	{
		if (tab[i] == (char *)0)
			del(tab, i, &len);
	}
	return (len);
}
