/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:48:26 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 12:33:33 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (tmp)
	{
		tmp = begin_list;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		return(tmp);
	}
	return (NULL);
}
