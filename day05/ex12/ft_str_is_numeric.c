/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:22:47 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 18:37:36 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp < 48 || *tmp > 57)
		{
			return (0);
		}
		tmp++;
	}
	return (1);
}

/*
**int main(void)
**{
**	char a[10]="5126565";
**	printf("%d",ft_str_is_numeric(a));
**	return (0);
**}
*/
