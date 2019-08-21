/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:34:02 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 16:04:59 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list,int (*cmp)())
{
	t_list *tmp1;
	t_list *tmp2;
	t_list store;

	tmp1 = *begin_list;
	while(tmp1->next)
	{
		tmp2 = tmp1->next;
		while (tmp2->next)
		{
			if (cmp(tmp1, tmp2) > 0)
			{
				store.data = tmp1->data;
				tmp1->data = tmp2->data;
				tmp2->data =store.data;
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}
