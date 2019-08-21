/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 12:35:36 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 12:58:21 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*tmp;

	i = 1;
	tmp = begin_list;
	while (tmp && i< nbr)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == nbr && tmp)
		return(tmp);
	else
		return(NULL);
}

