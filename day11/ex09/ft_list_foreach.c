/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:27:09 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 13:30:19 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list *tmp;
	
	tmp = begin_list;
	while(tmp)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}
