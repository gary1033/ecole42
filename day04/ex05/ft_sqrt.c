/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:16:11 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 21:27:51 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;
	int sqrt;

	sqrt = 0;
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*
**int main(void)
**{
**	int i;
**	int ans;
**
**	scanf("%d", &i);
**	ans = ft_sqrt(i);
**	printf("%d", ans);
**	return (0);
**}
*/
