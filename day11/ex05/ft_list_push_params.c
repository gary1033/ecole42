/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:58:18 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 12:33:10 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*head;
	t_list	*tmp;

	i = 2;
	if (ac ==1)
		return (NULL);
	else
	{
		head = ft_create_elem(av[1]);
		while (i < ac)
		{
			tmp = ft_create_elem(av[i]);
			tmp ->next = head;
			head = tmp ;
		}
	}
	return (head);
}
