/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:11:46 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/20 13:24:02 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
#define FT_LIST_H
typedef struct	s_list
{
	struct	s_list	*next;
	void			*data;
}				t_list;

t_list	*ft_create_elem(void *data);

#endif
