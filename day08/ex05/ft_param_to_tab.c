/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:58:53 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/16 15:38:11 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char	*ft_stdrup(char *src)
{
	char	*tmp;
	int		i;
	i = 0;
	while(src[i])
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*stock;
	int i;
	int j;

	i = 0;
	stock = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (ac[i][j])
			j++;
		stock[i]->size_param = j;
		stock[i]->str = ac[i];
		stock[i]->copy = ft_stdrup(ac[i]);
		stock[i]->tab = ft_split_whitespaces(ac[i]);
		i++;
	}
	stock[i]->str = 0;
	return (stock);
}
