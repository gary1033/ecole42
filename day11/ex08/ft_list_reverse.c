/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:59:36 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 14:56:27 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*head;

	head = *begin_list;
	head->next = NULL;
	*begin_list = *begin_list->next;
	while (*begin_list)
	{
		tmp = *begin_list;
		*begin_list = *begin_list->next;
		tmp->next = head;
		head = tmp;
	}
	*begin_list = head;
}
