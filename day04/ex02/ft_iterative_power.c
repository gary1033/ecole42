/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:15:56 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 20:54:54 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int tmp;

	i = 0;
	tmp = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (i < power)
	{
		tmp *= nb;
		i++;
	}
	return (tmp);
}

/*
**int	 main(void)
**{
**	int num;
**	int power;
**	int ans;
**
**	scanf("%d%d", &num, &power);
**	ans = ft_iterative_power(num, power);
**	printf("%d", ans);
**	return (0);
**}
*/
