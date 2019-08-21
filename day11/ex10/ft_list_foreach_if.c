/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:31:02 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 13:45:42 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp)
	{
		if(cmp(tmp->data, data_ref) == 0)
		{
			f(tmp->data);
		}
		tmp = tmp->next;
	}
}
