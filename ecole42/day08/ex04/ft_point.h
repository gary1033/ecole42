/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:37:13 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/16 14:51:03 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H
typedef struct s_point
{
	int x;
	int y;
}				t_point;
void	set_point(t_point *point);
#endif
