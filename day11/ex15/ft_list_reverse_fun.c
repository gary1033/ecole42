/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:53:54 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/21 10:06:01 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*tmp;
	t_list	*head;
	t_list	*store;

	tmp = begin_list;
	store = NULL;
	while (tmp)
	{
		store = head;
		head = ft_create_elem(tmp->data);
		head->next = store;
		tmp = tmp->next;
	}
	while (begin_list)
	{
		begin_list->data = head->data;
		begin_list = begin_list->next;
		head = head->next;
	}
}
