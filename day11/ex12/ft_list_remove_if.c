/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:50:15 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 14:19:53 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *front;
	t_list *back;

	front = NULL;
	tmp = *begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref))
		{
			if (front == NULL)
			{
				front = tmp;
				tmp = tmp->next;
				free(front);
			}
			else
			{
				front->next = tmp->next;
				free(tmp);
				tmp = front->next;
			}
		}
		front = tmp;
		tmp = tmp->next;
	}
}
