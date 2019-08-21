/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:53:54 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 14:57:19 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*tmp;
	t_list	*head;

	head = begin_list;
	head->next = NULL;
	begin_list = begin_list->next;
	while (begin_list)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		tmp->next = head;
		head = tmp;
	}
	begin_list = head;
}
