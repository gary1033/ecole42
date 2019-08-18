/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 10:31:06 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/09 14:32:37 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = i;
	}
}

/*
**int main(void)
**{
**	int size;
**	int sort[10];
**	int i;
**
**	i = 0;
**	size = 10;
**	while (i < 10)
**	{
**	scanf("%d",&sort[i]);
**	i++;
**	}
**	i = 0;
**	ft_sort_integer_table(sort, size);
**	while (i <10)
**	{
**		printf("%d ",sort[i]);
**		i++;
**	}
**	return (0);
**}
*/
